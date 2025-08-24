#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    if (0<=a && b<=100){
        if (a >= b) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
}
