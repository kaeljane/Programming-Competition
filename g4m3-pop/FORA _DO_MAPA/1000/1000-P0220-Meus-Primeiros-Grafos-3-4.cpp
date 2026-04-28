#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 28/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    fiz a logica inicial tudo de novo
    23min 50sec
*/

void solve(){
    cin>>n;
    vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];
    
    map<ll, vector<ll>> mapa;
    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++) {
            if (v[i] % v[j] == 0 || v[j] % v[i] == 0) {
                mapa[i+1].push_back(j + 1);
            }
        }
    }

    vector<pair<ll, ll>> pares;
    for (auto &m : mapa) {
        for (ll i = 0; i < m.second.size(); i++) {
            pares.push_back({m.first, m.second[i]});
        }
    }
    vector<vector<ll>> mat(n, vector<ll> (n, 0));
    for (auto &p : pares) {
        mat[p.first - 1][p.second - 1] = 1;
        mat[p.second - 1][p.first - 1] = 1;
    }

    for (ll i = 0; i < n; i++) {
        cout << i + 1 << ": ";
        for (ll j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                cout << j + 1 << " ";
            }
        }
        cout << el;
    }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}