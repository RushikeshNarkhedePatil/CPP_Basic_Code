#include<iostream>
using namespace std;

class Array
{
    private:
        int *ptr;   //create pointer name ptr
        int size;
    public:
        Array(int no=5)//constroctor with default parameter
        {
            cout<<"Constroctor\n";
            size=no;
            ptr = new int[size];
        }
        ~Array()    //memory janya adhi jya goshti pahije te destroctor madhe lihav
        {
            cout<<"Destroctor\n";
            delete[]ptr;
        }
        void Accept()
        {
            int icnt=0;
            int isum=0;
            cout<<"Enter The Element: \n";
            for(icnt=0;icnt<size;icnt++)
            {
                cin>>ptr[icnt];
        
            }

        }
        void Display()
        {
            cout<<"Enter Element are\n";
            int icnt=0;
            for(icnt=0;icnt<size;icnt++)
            {
                cout<<ptr[icnt]<<"\n";
            }
        }

};                              //          Diagramiatc Representation of Dynamic Memory
                                //
int main()                      //      _______         ************ 100     _0__ _1__2 _ 3_ _4 _
{                               //obj  |__100_|-------> *          * ------>|___|___|___|___|___|
    cout<<"Inside Main\n";      //      50     58       *          *      200 204 208 212 216 220
    Array *obj=NULL;            //                      *   200    *
    obj=new Array(6);           //               ptr    *          *
    obj->Accept();              //                      *          *
    obj->Display();             //                      * ********** 108
    delete obj;                 //                      *    4     *
                                //               size   *          *
                                //                      ************ 112
    cout<<sizeof(obj)<<endl;    //sizeof is used to check memory size in bytes.
    return 0;
}