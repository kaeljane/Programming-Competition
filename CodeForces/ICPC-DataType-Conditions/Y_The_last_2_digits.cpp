#include <iostream>
#include <vector>
#include <string> //
#include <algorithm>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    // codigo comentado causa overflow.
    // long long multication = a*b*c*d;
    // string numero = to_string(multication); // transforma o número em string.
    // string antipenultimo = numero.size() - 2; //antipenultimo digito
    // cout<<numero[numero.size() - 2];
    // cout<<numero.back()<<endl; // mostrará o último
    long long resto = ((a%100)*(b%100)*(c%100)*(d%100)) % 100;
    string resto_string = to_string(resto);
    vector<long long> lista = {};
    if (resto == 0) {
        lista.push_back(resto);
        lista.push_back(resto);
        for(const int& numero : lista) {
            cout<<numero;
        }
    }
    else if (resto_string.size() == 1){
        lista.push_back(0);
        lista.push_back(resto);
        for(const int& numero : lista) {
            cout<<numero;
        }
    }
    else {
        cout<<resto<<endl;
    }
    return 0;
}