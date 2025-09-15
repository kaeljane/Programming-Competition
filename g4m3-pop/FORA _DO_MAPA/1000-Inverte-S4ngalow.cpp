#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; 
    long long numero;
    vector<int> lista = {};

    cin>>n;
    // quantidade de numeros inteiros do chapeu
    for (int i = 0; i < n ; i++){
        cin>>numero;
        lista.push_back(numero);
        if (numero < 0) {
            for (auto& inteiro : lista) {
                if (inteiro > 0) {
                    inteiro = inteiro - 2*inteiro;
                } 
                else if (inteiro < 0){
                    inteiro = inteiro - (2*inteiro);
                }
            }
        }
    }

    for (auto& numero__: lista) {
        cout<<numero__<<' ';
    }
    cout<<'\n';

    return 0;
}