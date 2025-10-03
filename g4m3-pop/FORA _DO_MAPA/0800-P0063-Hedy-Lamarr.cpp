#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 02/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll t; cin>>t;
    ll numero;
    vl lista;
    ll dif;
    bool resposta = true;
    while (t--) {
        cin>>numero;
        lista.push_back(numero);
    }
    sort(lista.begin(), lista.end());
    dif = abs(lista[0] - lista[1]);
    for (ll i = 0; i < lista.size()-2; i++) {
        if (abs(lista[i] - lista[i+1]) == dif);
        else {
            resposta = false;
            break;
        } 
    }
    if (lista.size() == 1) cout << "FALSE" << '\n';
    else if (resposta) cout<< "TRUE" << '\n';
    else cout << "FALSE" << '\n';
    return 0;
}