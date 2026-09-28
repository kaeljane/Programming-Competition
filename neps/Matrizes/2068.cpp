#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n; cin>>n;
    // 0-based
    vector<vector<ll>> mat(n, vector<ll>(n));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    vector<ll> linha(n);
    vector<ll> coluna(n);

    map<ll, ll> linhaMap;
    map<ll, ll> colunaMap;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            linha[i] += mat[i][j];
            coluna[j] += mat[i][j];
        }
    }
    
    for (ll i = 0; i < n; i++) {
        linhaMap[linha[i]]++;
        colunaMap[coluna[i]]++;
    }
    ll valorMenos = 0;
    ll atual = INT_MAX;
    
    for (auto &x : linhaMap) {
        if (x.second < atual) { // arrumado
            valorMenos = x.first;
            atual = x.second;
        }
        
    }

    // for par maior
    ll atualMaior = 0;
    atual = 0;
    for (auto &x : linhaMap) {
        if (x.second > atual) {
            atualMaior = x.first;
            atual = x.second;
        }
    }

    ll l = -1;
    ll c = -1;

    for (ll i = 0; i < n; i++) {
        if (linha[i] == valorMenos) {
            l = i;
        }
        if (coluna[i] == valorMenos) {
            c = i;
        }
    }

    cout << atualMaior - valorMenos << '\n' << l + 1 << '\n' << c + 1 << '\n';
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
