#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // vamos receber um números e temos que imprimir se ele é primo ou não/
    // primo = YES
    // N primo = NO
    int num, divisores = 1;
    cin>>num;
    for (int i = 1; i<(num/2); i++){
        if (num%i == 0){divisores++;} //sempre vai adicionar quando i == 1
    }
    if (divisores>2) {cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}

    return 0;
}