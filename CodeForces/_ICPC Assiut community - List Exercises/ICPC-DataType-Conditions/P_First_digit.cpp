#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // tranformar em string e pegar o primeiro numero depois transformar em inteiro?
    string numero;
    cin>>numero;
    int first_number = numero[0];
    if (first_number % 2 == 0) {
        cout<<"EVEN"<<endl;
    }
    else {
        cout<<"ODD"<<endl;
    }
    return 0;
}