#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    char a, b;
    cin>>a;
    if (a >= 97 && a<=123) {
        b = a-32;
        // isso sempre lembrar de colocar dentro da variavel.
        cout<<b<<endl;
    }
    else {
        b = a+32;
        cout<<b<<endl;
    }

    return 0;
}