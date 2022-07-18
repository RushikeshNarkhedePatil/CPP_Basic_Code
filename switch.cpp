#include<iostream>
using namespace std;
void SwitchCase(int N)
{
    switch (N)
    {
    case 1:
        cout << "your choice is 1\n";
        break;
    case 2:
        cout << "your choice is 2\n";
        break;
    case 3:
        cout << "your choice is 3\n";
        break;
    case 4:
        cout << "your choice is 4\n";
        break;
    default:
        cout << "your choice is not valid \n";
        break;
    }
}
int main()
{
    int No=0;
    cout << "Enter Number\n";
    cin>>No;
    SwitchCase(No);
    return 0;
}