#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 29/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, m, a, b;
string s, c;

/* (mind )
    arvores sao grafos conexos e acíclicos

    Nao pode ter cicos em um árvores !!!

    No clock

    2 1
    3 1
    2 0
    
    aprox 20min

*/

void solve(){
    cin>>n;
    ll arestas = n - 1;

    vector<vector<ll>> adj(n);
    vector<bool> vis(n, false);

    for (ll i = 0; i < arestas; i++) {
        cin>>x>>y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }

    ll grafosConv = 0;

    function<void(ll)> dfs = [&](ll u) {
        vis[u] = true;
        for (ll v : adj[u]) {
            if (!vis[v]) dfs(v);
        }
    };

    for (ll i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i);
            grafosConv++;
        }
    }

    if (grafosConv == 1) cout << "YES" << el;
    else cout << "NO" << el;

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}