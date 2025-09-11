#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> lista = {a, b, c};
    sort(lista.begin(), lista.end());
    cout<<lista[0]<<" ";
    cout<<lista.back();
    
    return 0;
}