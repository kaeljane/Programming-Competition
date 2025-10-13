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
    vl lista;
    ll numero, soma = 0;

    for (ll i = 0; i < 10 ; i++) {
        cin>>numero;
        lista.push_back(numero);
    }

    for (ll i = 0; i < lista.size()-2; i++) {
        soma += lista[i] + lista[i+1] + lista[i+2];
        if (i == lista.size()-3) {
            soma += lista[i+1] + lista[i+2] + lista[0];
            soma += lista[i+2] + lista[0] + lista[1];
        }
    }
    cout<<soma<<'\n';

    return 0;
}