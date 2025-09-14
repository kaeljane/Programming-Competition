#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t, menor_numero, posicao; 
    
    vector<int> lista;
    vector<int> lista_alterada;
    long long n;

    cin>>t;
    for (int i = 0 ; i < t ; i++){
        cin>>n;
        lista.push_back(n);
    }
    lista_alterada = lista;
    sort(lista_alterada.begin(), lista_alterada.end());
    for (int k = 0; k < lista.size(); k++) {
        if (lista[k] == lista_alterada[0]) {posicao=k+1; break;}
    }
    cout<<lista_alterada[0]<<" "<<posicao<<'\n';

}