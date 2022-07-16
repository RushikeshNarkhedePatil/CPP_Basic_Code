#include<iostream>
using namespace std;
int FindMax(int No1,int No2,int No3)
{
    if(No1>No2&&No1>No3)
    {
        return No1;
    }
    else if(No2>No1&&No2>No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}
int main()
{
    int n1,n2,n3;
    cout<<"Enter Three Numbers :\n";
    cin>>n1>>n2>>n3;
    int iRet=FindMax(n1,n2,n3);
    cout<<"Maximum Number is : "<<iRet<<endl;
}