#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll qt, numero, menor = 0, frequencia = 0; cin>>qt;
    vector<int> lista;
    while(qt--){
        cin>>numero;
        lista.push_back(numero);
        if(qt == 0) break;
    }

    for (int i = 0; i < lista.size(); i++) {
        if (i==0) {menor=lista[i];}
        else {
            if (menor > lista[i]) menor = lista[i];
        }
    }

    for (auto& x : lista) {
        if (x == menor) {frequencia++;}
    }


    if (frequencia % 2 == 0) cout<<"Unlucky"<<'\n';
    else cout<<"Lucky"<<'\n';


    return 0;
}