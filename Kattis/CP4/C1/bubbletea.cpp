#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    estrategia pao-duro



*/

void solve() {
    ll n, m, x, cob, dinheiro, menorValor = INT_MAX; 
    
    cin>>n;
    vector<ll> chaPreco(n);
    
    for (ll i = 0; i < n; i++) {
        cin>>chaPreco[i];
    }
    
    cin>>m;
    vector<ll> coberturaPreco(m);
    for (ll i = 0; i < m; i++) {
        cin>>coberturaPreco[i];
    }
    
    for (ll i = 0; i < n; i++) {
        cin>>x;
        for (ll j = 0; j < x; j++) {
            cin>>cob; // 1-based 
            cob--;    // 0-based
            menorValor = min(menorValor, 
                chaPreco[i] + coberturaPreco[cob]);
        }
    }
    cin>>dinheiro;

    cout << max((ll)0, (dinheiro / menorValor) - 1) << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}