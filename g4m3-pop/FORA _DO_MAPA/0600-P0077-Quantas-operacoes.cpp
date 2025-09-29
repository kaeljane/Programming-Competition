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
    ll a,b,c, menor, maior, qt=0; cin>>a>>b>>c;
    vl lista;
    vl lista_backup;
    lista.push_back(a);
    lista.push_back(b);
    lista.push_back(c);
    lista_backup = lista;
    sort(lista_backup.begin(), lista_backup.end());
    for (ll i = 0; i < lista.size()-1; i++) {
        if (lista[i] > lista[i+1]) {
            menor = lista[i+1];
            maior = lista[i];
            lista[i] = menor;
            lista[i+1] = maior;
            qt++;
        } 
        if (lista[0] > lista[1]) {
            menor = lista[1];
            maior = lista[0];
            lista[0] = menor;
            lista[1] = maior;
            qt++;
        }
    }
    cout<<qt<<'\n';

    return 0;
}