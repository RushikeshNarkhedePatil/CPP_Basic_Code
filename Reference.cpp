//pointer is used in c and C++
//reference is use to C++
//Incase of pointer memory gets allocate 
//but Incase of reference no need to memory
//besacuse reference means only first created variable
//another name is called as reference.
///////////////////////////////////////////////////////
// & cha vapar address mhanun n karata apan reference la pan use karto.
// jar & = chya pudhe asel tar to address operator consider hoto.
//ani = chya adhi & asala tar to reference mhanun consider hoto.
//jar apan & vaparala don variable chya maddhe tar tyala bitwise & mhantat.
//&& asel tar logical & as mhatal jate.
///////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main()
{
    int no=11;
    int *p=&no;     //= chya pudhe (&) mhanje pointer
    
    int value=21;
    int &x=value;   //= chya adhi (&) mhanje reference.
    int &y=x;       //reference rafer to another reference
    int *q=&x;      // pointer refer to no referens x
    // int *(&q)=p;    //pointer q refer to ponter p
    int &z=value;   // eka variable che eka peksha jast pan nav asu shaktat.
    int arr[]={10,20,30,40};
    int(&brr)[4]=arr;   //brr is refer to array arr.
    cout<<arr[0]<<"\n";
    cout<<brr[0]<<"\n";
    cout<<no<<"\n";
    cout<<"value of value is :"<<value<<endl;
    cout<<"value of X is :"<<x<<endl;
    cout<<"value of y is :"<<y<<endl;
    cout<<"value of z is :"<<z<<endl;
    cout<<"Address of values is :"<<&value<<endl;
    cout<<"Address of X is :"<<&x<<endl;
    cout<<"Address of y is :"<<&y<<endl;
    cout<<"Address of z is :"<<&z<<endl;
    return 0;
}
