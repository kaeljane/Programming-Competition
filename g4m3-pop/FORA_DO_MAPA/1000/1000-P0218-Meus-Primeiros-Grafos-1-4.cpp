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
    cada indice do array representa um vertice
    50min 36sec
*/

void solve(){
    cin>>n;
    vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];
    
    map<ll, vector<ll>> mapa;
    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++) {
            if (v[i] % v[j] == 0 || v[j] % v[i] == 0) {
                mapa[i+1].push_back(j+1);
            }
        }
    }
    vector<pair<ll, ll>> pares;
    for (auto &i : mapa) {
        for (ll j = 0; j < i.second.size(); j++) {
            pares.push_back({i.first, i.second[j]});
        }
    }
    sort(all(pares));
    for (auto &p : pares) {
        cout << p.first << " " << p.second << el;
    }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}