// Demonstate copy constrocter 
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
        Array(Array &ref)   //copy constroctor
        {
            cout<<"Constroctor\n";
            size=ref.size;
            ptr = new int[size];
            int icnt=0;
            for(icnt=0;icnt<size;icnt++)
            {
                ptr[icnt]=ref.ptr[icnt];
            }
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
};
int main()
{
    Array obj1(3);
    obj1.Accept();
    obj1.Display();
    Array obj2(obj1);
    // obj2.Accept();
    obj2.Display();
}