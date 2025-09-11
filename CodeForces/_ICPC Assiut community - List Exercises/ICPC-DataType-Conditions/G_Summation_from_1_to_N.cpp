#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// algoritmo precisa ser mais eficiente
int main() {
    long long n;
    cin>>n;
    long long somatorio = n*(n + 1)/2;
    cout<<somatorio<<endl;

    return 0;
}