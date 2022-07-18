#include <iostream>
using namespace std;
int CallByRef(int *a,int *b)
{
    int c=0;
    *a=30;
    *b=40;
    cout <<*a<<" "<<*b<<endl; //30 40 //30 40 because function call 2 times.
     c=*a+*b;
}
int main()
{
    int a=10;
    int b=20;
    cout <<"Before calling function "<< a <<" "<<b<<endl;   // 10 20
    CallByRef(&a,&b);   //call function
    cout<<"After Calling Function "<<a<<" "<<b<<endl; //30 40
    // int iRet=CallByRef(&a,&b);
    // cout << iRet;
    cout << CallByRef(&a,&b);
}