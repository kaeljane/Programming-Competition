#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string nome1, nome2;
    ll qt=0, contador=0, contador_principal = 0;
    map<char, int> mapa;
    map<char, int> mapa2;
    bool p_lista = false;
    cin>>nome1>>nome2;
    for (int i = 0; i < nome2.size(); i++) {
        char chave = nome2[i];
        mapa[chave]++; 
    }
    for (int k = 0; k < nome1.size(); k++) {
        char chave = nome1[k];
        mapa2[chave]++; 
    }
    for (auto& par : mapa) {
        for (auto& par2 : mapa2) {
        if (par.first == par2.first) {
            if (par.second == par2.second){
                qt+=0;
            }
            else {
                if (par.second > par2.second) {
                    qt += par.second - par2.second;
                }
            }
        }
        if (par.first != par2.first){contador++; }
        contador_principal++;
        }
        if (contador == contador_principal){qt+=par.second; }
        contador=0;
        contador_principal=0;
    }
    cout<<qt<<'\n';
    return 0;
}
