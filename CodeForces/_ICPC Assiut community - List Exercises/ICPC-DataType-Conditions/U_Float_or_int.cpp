#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip> //usada
using namespace std;

int main() {
    float n;
    cin>>n;
    int i = n; // parte inteira do numero

    if (n == i){ // int igual a flutuante
        cout<<"int "<<i<<endl;
    }
    else { // tem resto
        cout<<"float "<<i<<" "<<setprecision(3)<<n-i<<endl;
    }


    return 0;
}