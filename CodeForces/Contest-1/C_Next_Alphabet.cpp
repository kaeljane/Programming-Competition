#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    char letra; 
    cin>>letra;
    if (letra != 'z'){
        cout<<char(letra+1)<<endl;
    }
    else {
        cout<<'a'<<endl;
    }
    return 0;
}