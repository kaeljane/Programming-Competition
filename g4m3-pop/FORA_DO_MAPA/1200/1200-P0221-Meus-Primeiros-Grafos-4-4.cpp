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
    38min
    
*/

void solve(){
    cin>>n;
    vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];
    
    vector<pair<ll, ll>> vertices(3);
    for (ll i = 0; i < 3; i++) {
        cin>>x>>y;
        vertices[i] = {x, y};
    }
    
    ll vert; cin>>vert; vert--;

    map<ll, vector<ll>> mapa;
    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++) {
            if (v[i] % v[j] == 0 || v[j] % v[i] == 0)
                mapa[i+1].push_back(j+1);
        }
    }
    vector<pair<ll, ll>> pares;
    for (auto &m : mapa) {
        for (ll i = 0; i < m.second.size(); i++) {
            pares.push_back({m.first, m.second[i]});
        }
    }

    vector<vector<ll>> mat(n, vector<ll>(n, 0));
    for (auto &p : pares) {
        mat[p.first-1][p.second-1] = 1;
        mat[p.second-1][p.first-1] = 1;
    }

    // existe arestas entre os vertices?
    for (ll i = 0; i < 3; i++) {
        if ( mat[vertices[i].first-1][vertices[i].second-1] == 1 ||
            mat[vertices[i].second-1][vertices[i].first-1] == 1 ) {
            cout << "YES" << el;
        }
        else {
            cout << "NO" << el;
        }
    }

    for (ll i = 0; i < n; i++) {
        if (mat[vert][i] == 1) {
            cout << i + 1 << " ";
        }
    }
    cout << el;

    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}