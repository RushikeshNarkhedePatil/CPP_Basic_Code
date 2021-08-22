#include<iostream>
using namespace std;
class Demo
{
    public:
        int a;
    private:
        int b;
    protected:
        int c;

    public:
        Demo(int i,int j, int k)
        {
            cout<<"Constroctor"<<endl;
            this->a=i;
            this->b=j;
            this->c=k;
        }
        void fun()  //void fun(Demo *const this) as internally janar
        {
            cout<<"value of a : "<<this->a<<endl;   //10
            cout<<"Value of b : "<<this->b<<endl;   //20
            cout<<"Value of c : "<<this->c<<endl;   //30
        }
};
int main()
{
    Demo *p=new Demo(10,20,30);
    p->fun();
    cout<<"value of a : "<<p->a<<endl;
    // cout<<"value of b : "<<p->b<<endl;   //error because private member not accesible outside the class.
    // cout<<"value of c : "<<p->c<<endl;   //error because protected is not accesible outside the class is only accessible base class as well as its immagiate derived class.
    return 0;
}