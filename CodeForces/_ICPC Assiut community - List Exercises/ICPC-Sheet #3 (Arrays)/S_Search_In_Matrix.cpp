#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
 
int main() {
    ___;
    ll n, m, numero; cin>>n>>m;
    string resposta = "will take number";
    vl lista;
 
    for (ll i = 0; i < n*m ; i++) {
        cin>>numero;
        lista.push_back(numero);
    }
    
    sort(lista.begin(), lista.end());
 
    for (ll j = 0 ; j < 1; j++) {
        cin>>numero;
        resposta = "will take number";
 
        ll a = 0, b = lista.size()-1;
        while (a<=b) {
            ll k = (a+b)/2;
 
            if (lista[k] == numero) {resposta = "will not take number"; break;}
            if (lista[k] > numero) b = k-1;
            else a = k+1;
        }
        cout<<resposta;
 
    } 
 
    
 
    return 0;
}