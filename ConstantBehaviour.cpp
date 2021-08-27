//constant characteristics asel tar tyamadhil value kadhich change honar nahi.
//contant declare kelya kelyach tyamadhe value initilise karavi lagte.
//constant variable initilise immidiatly
//c++ madhe jar class madhe constant characteristic vapraychi asel tar tyasathi class create zalya zalya
//class chya ending la immedetly class cha object create karav mhanje tabdtop memory milel
// v apan class madhe ani class constroctor v class madhil function madhe constant use karu shakato
#include<iostream>
using namespace std;
class Demo
{
    public:
        const int a=10;
    Demo()
    {
        cout<<"Constant Variable inside class : "<<this->a<<endl;
    }
    void fun()
    {
        const int c=99;
        cout<<"Inside Fun\n";
        cout<<this->a<<endl;   
        cout<<"Constant variable inside function : "<<c<<endl;
    }
}dobj;
int main()
{
    dobj.fun();
    return 0;
}