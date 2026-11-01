#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n; cin>>n;

    vector<vector<ll>> mat(n, vector<ll>(n, 0));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    vector<ll> somaLinha(n, 0);
    vector<ll> somaColuna(n, 0);
    
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            somaLinha[i] += mat[i][j];
            somaColuna[j] += mat[i][j];
        }
    }

    set<ll> cj;
    for (ll i = 0; i < n; i++) {
        cj.insert(somaLinha[i]);
        cj.insert(somaColuna[i]);
    }

    ll menor = INT_MAX;
    ll maior = 0;

    for (auto &x : cj) {
        menor = min(menor, x);
        maior = max(maior, x);
    }
    ll l = -1;
    ll c = -1;
    for (ll i = 0; i < n; i++) {
        if (somaLinha[i] == menor) {
            l = i;
        }
        if (somaColuna[i] == menor) {
            c = i;
        }
    }


    cout << maior - menor << "\n" <<
            l + 1 << '\n' << c + 1 << '\n';



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
