#include <iostream>
using namespace std;

int main()
{
    int n, test;
    bool resultado = false;
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin>>test;
        if (test == 1) {
            resultado = true;
        }
    }
    if (resultado == false) {
        cout<<"EASY"<<endl;
    }
    else {
        cout<<"HARD"<<endl;
    }
}
