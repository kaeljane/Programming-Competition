#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 29/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    //YRG
    ll t, indice_letra; cin>>t;
    vector<char> cores = {'Y', 'R', 'G'};
    string letras;
    bool resposta = true, letra_lista = false;

    while(cin>>letras){
        // analisando cada letra
        for(ll i = 0; i < letras.size(); i++){ // i==1
            // comparando com lista cores
            
            if (i == 0){
                for(ll j = 0; j < cores.size(); j++) {
                    if (letras[i] == cores[j]){ // G == 2
                        indice_letra = j; // indice_letra == 2
                        // cout<<letras[i]<<' ';
                        break;
                    }
                }
            }
            for(ll j = 0; j < cores.size(); j++) {
                    if (letras[i] == cores[j]){
                        letra_lista = true;
                        break;
                    }
                }

            if (letra_lista == false) {
                resposta = false;
                break;
            }
            // i > 0
            if (i != 0 && resposta == true && letra_lista == true) {
                // se a proxima letra for igual a proxima da lista cores segue o padrao
                if (indice_letra <= 1){
                    if (letras[i] == cores[indice_letra+1]);
                    else resposta = false;
                    // cout<<letras[i]<<' ';
                    indice_letra++;
                }
                // 0 1 2
                else { // i == 1 & indice_letra == 2
                    cout<<'\n';
                    if (indice_letra == 2) indice_letra = 0;
                    if(letras[i] == cores[indice_letra]);
                    else resposta = false;
                    // cout<<letras[i]<<' ';
                }
            }
            if (resposta != true) break;

        }

    }
    if (resposta) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    return 0;
}