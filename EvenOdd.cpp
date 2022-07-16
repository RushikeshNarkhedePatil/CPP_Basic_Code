#include<iostream>
using namespace std;
int FindEvenOdd(int No)
{
    if(No%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n=0;
    cout<<"Enter Number"<<endl;
    cin>>n;
    bool iRet=FindEvenOdd(n);
    if(iRet==true)
    {
        cout<<"Number is Even"<<endl;
    }
    else
    {
        cout<<"Number is Odd"<<endl;
        cout<<sizeof(bool);
    }
}