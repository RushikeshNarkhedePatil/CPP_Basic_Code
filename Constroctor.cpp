#include<iostream>
using namespace std;
class Constroctor
{
    private:    //don variable la class chya baher konich use nahi karu shaknar private mule
    int no1;
    int no2;
    public:     // ethun khalche sarv public ahet.

    Constroctor()
    {
        cout<<"Default"<<endl;
        no1=0;
        no2=0;
    }
    Constroctor(int x,int y)
    {
        cout<<"parameterized"<<endl;
        no1=x;
        no2=y;
    }
    Constroctor(Constroctor&ref)
    {
        cout<<"Copy Constroctor :\n";
        no1=ref.no1;
        no2=ref.no2;
    }
};
int main()
{
    Constroctor obj;
    Constroctor obj1(10,20);
    Constroctor obj2(obj1);
    return 0;
}