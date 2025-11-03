#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // k-esimo colocado, ganha quem conseguir pontuação positiva.
    ll n, k, teste, repetidos = 0, positivos = 0, zeros = 0; cin>>n>>k;
    vector<int> lista;

    for(ll _ = 0 ; _ < n ; _++){
        cin>>teste;
        lista.push_back(teste);

        if (teste > 0) positivos++;
        else zeros++;

    }
    // cout<<positivos<<'\n';
    // cout<<zeros<<'\n';
    if (positivos >= k){
        for(ll i = k; i < lista.size(); i++){
            if (lista[k-1] == lista[i]) repetidos++;
        }
        cout<<k+repetidos<<'\n';
    }
    // positivos < k
    else if (n == zeros) {cout<<0<<'\n';}
    else {
        if (positivos < k){cout<<positivos<<'\n';}
    }
    // cout<<K+

    return 0;
}