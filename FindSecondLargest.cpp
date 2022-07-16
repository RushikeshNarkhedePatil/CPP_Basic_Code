#include<iostream>
using namespace std;
int FindSecondLargest(int No1,int No2,int No3)
{
    if((No1>No2&&No1<No3)||(No1>No3&&No1<No2))
    {
        return No1;
    }
    if((No2>No1&&No2<No3)||(No2>No3&&No2<No1))
    {
        return No2;
    }
    else{
        return No3;
    }
}
int main()
{
    int n1,n2,n3;
    cout<<"Enter Three Numbers :\n";
    cin>>n1>>n2>>n3;
    int iRet=FindSecondLargest(n1,n2,n3);
    cout<<"Second Largest Number is : "<<iRet<<endl;
}