#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> lista = {a,b,c};
    vector<int> backup = lista; // será copiado

    sort(lista.begin(), lista.end());
    for (int& numero : lista) {
        cout<<numero<<endl;
    }
    cout<<""<<endl;

    for (int& numero : backup) {
        cout<<numero<<endl;
    }
    return 0;
}