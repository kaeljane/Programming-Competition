#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 28/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    string hora, aux = "";
    ll qt = 0;
    vs lista;
    bool valido = true;
    

    for (ll i = 0; i < 32; i++) {
        cin>>hora;
        hora.push_back(':');
        for (ll j = 0; j < hora.size(); j++) {
            if (hora[j] != ':') {
                aux.push_back(hora[j]);
            }
            else {
                lista.push_back(aux);
                aux = "";
            }
        }

        // analise se é válido
        // hora 
        if (0 <= stoll(lista[0]) && stoll(lista[0]) <= 23) 
            valido = true;
        else 
            valido = false;
        // minuto
        if (valido){
            if ((0 <= stoll(lista[1]) && stoll(lista[1]) <= 59)) 
                valido = true;
            else {
                valido = false;
            }
        }
        //segundo
        if (valido){
            if ((0 <= stoll(lista[2]) && stoll(lista[2]) <= 59)) 
                valido = true;
            else {
                valido = false;
            }
        }
        if (valido) {
            if ((0 <= stoll(lista[0]) && stoll(lista[0]) <= 5) || (22 <= stoll(lista[0]) && stoll(lista[0]) <= 23)) {
                qt++;
                // copy(lista.begin(), lista.end(), ostream_iterator<string> (cout, " ")); cout<<'\n';
            }
        }
        lista = {};
    }
    cout<<qt<<'\n';

    return 0;
}