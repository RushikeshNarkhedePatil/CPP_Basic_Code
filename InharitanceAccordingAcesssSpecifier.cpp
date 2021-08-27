//Multilevel Inharitance using Access Specifier in public, Private Projected
//
#include<iostream>
using namespace std;
class Base
{
    public:
        void fun()
        {
            cout<<"Inside fun\n";
        }
};
class Derived:protected Base
{
    public:
    void gun()
    {
        cout<<"Inside Gun\n";
    }
};
class Derived1:public Derived
{
    public:
        void man()
        {
            cout<<"Inside Man\n";
        }
};
class Derived2:public Derived1
{
    public:
        void Run()
        {
            cout<<"Inside Run\n";
        }
};
int main()
{
    // Base bobj;
    // Derived dobj;
    // Derived1 dobj1;
    Derived2 dobj1;
    // bobj.fun();
    // dobj1.fun();
    dobj1.man();
    dobj1.gun();
    dobj1.Run();

    return 0;
}