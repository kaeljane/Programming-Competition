#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 22/09/2025 by Kaeljane
int main() {
    ___;
    ll n; cin>>n;
    vl lista;
    string resposta = "NAO";
    for (ll i = 0 ; i <= n ; i++) {
        lista.push_back(i);
    }

    // copy(lista.begin(), lista.end(), ostream_iterator<ll> (cout, " "));
    
    ll a = 0, b = lista.back(); // indice dos ultimos elementos.
    while (a <= b) {
        // metade
        ll k = (a+b)/2;
        if (lista[k]*lista[k] == n) {
            resposta = "SIM";
            break;
        }
        if ((lista[k]*lista[k]) > n) b = k-1; // a metade/2
        else a = k+1;

    }

    cout<<resposta<<'\n';
    

    return 0;
}