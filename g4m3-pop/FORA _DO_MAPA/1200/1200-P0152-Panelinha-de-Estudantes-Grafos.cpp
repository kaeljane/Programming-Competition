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

ll n, t, l, x, y, z, m;
string s, a, b, c;

/* (mind )
    DFS (Busca em Profundidade)
    Achar qt de grupos formados em grafos

    1h 2min 30sec

*/

void solve(){
    cin>>n>>m;
    
    vector<vector<ll>> adj(n);
    vector<bool> vis(n, false);

    for (ll i = 0; i < m; i++) {
        cin>>x>>y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }

    ll grafos = 0;
    function<void(ll)> dfs = [&](ll u) {
        vis[u] = true;
        for (ll v: adj[u]) {
            if (!vis[v]) dfs(v);
        }
    };
    for (ll i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i);
            grafos++;
        }
    }
    
    cout << grafos << el;
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}