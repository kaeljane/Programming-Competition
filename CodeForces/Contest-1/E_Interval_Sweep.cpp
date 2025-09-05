#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    int numImp = 0;
    int numPar = 0;
    
    cin>>a>>b; //PRECISA TER 'A' NUMEROS IMPARES E 'B' NUMEROS PARES.
    // vector<int> lista = {};
    if (a == 0 && b == 0){cout<<"NO"<<endl;}
    else if (a >= b+2 ) {cout<<"NO"<<endl;}
    else if (a+2 <= b){cout<<"NO"<<endl;}
    else {cout<<"YES"<<endl;}
    // cout<<numImp<<endl;
    

    return 0;
}