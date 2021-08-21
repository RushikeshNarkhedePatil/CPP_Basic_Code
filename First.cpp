// first object oriented program
//the bellow program use to demonstate
// the fundamental concept of object orientetion that is class

#include<iostream>
using namespace std;
class First
{
    public:

        void Fun()
        {
            cout<<"Inside fun\n";
        }
        int Add(int No1,int No2)
        {
            int sum=0;
            sum=No1+No2;
            return sum;
        }
        int Sub(int No1,int No2)
        {
            int sum=0;
            sum=No1-No2;
            return sum;
        }
        int Div(int No1,int No2)
        {
            int sum=0;
            sum=No1/No2;
            return sum;
        }
        int Multi(int No1,int No2)
        {
            int sum=0;
            sum=No1*No2;
            return sum;
        }
        void Exit()
        {
            cout<<"Program sucessfully terminated\n";
        }
};
int main()
{
    cout<<"Inside Main\n";
    int iret=0,ivalue1=0,ivalue2=0,choice=0;
    First obj;
    // First obj1;
    cout<<"Enter First Number\n";
    cin>>ivalue1;
    cout<<"Enter Second Number\n";
    cin>>ivalue2;
    cout<<"Enter Your Choice\npress 1 for Addition\npress 2 for Substraction\npress 3 for Division\npress 4 for Multiplication\n";
    cin>>choice;
    // obj.fun();
    obj.Fun();
    if(choice==1)
    {
        iret=obj.Add(ivalue1,ivalue2);
        cout<<"Addition is :"<<iret<<endl;
    }
    if(choice==2)
    {
        iret=obj.Sub(ivalue1,ivalue2);
        cout<<"Substraction is :"<<iret<<endl;
    }
    if(choice==3)
    {
        iret=obj.Div(ivalue1,ivalue2);
        cout<<"Division is :"<<iret<<endl;
    }
    if(choice==4)
    {
        iret=obj.Multi(ivalue1,ivalue2);
        cout<<"Multiplication is :"<<iret<<endl;
    }
}
