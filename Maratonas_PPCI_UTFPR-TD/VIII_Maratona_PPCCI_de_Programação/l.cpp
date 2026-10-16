#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

vector<vector<ll>> adj;
vector<bool> vis;
vector<ll> talGrupo;
ll grupo = 1;

void dfs(ll u, ll pai, ll grupo) {
    vis[u] = 1;
    talGrupo[u] = grupo;
    for (ll vizinho : adj[u]) {
        if (!vis[vizinho]) {
            // talGrupo[vizinho] = grupo;
            dfs(vizinho, u, grupo);
        }
    }
}

void solve() {
    ll n, m; cin>>n>>m;

    adj.assign(n+1, vector<ll>());
    vis.assign(n+1, false);
    talGrupo.assign(n+1, 0);

    for (ll i = 0; i < m; i++) {
        ll u, v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (ll i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i, -1, grupo);
            grupo++;
        }
    }

    ll q, x, y;
    cin>>q;
    for (ll i = 0; i < q; i++) {
        cin>>x>>y;
        if (talGrupo[x] == talGrupo[y] && talGrupo[x] > 0) {
            cout << "sim" << '\n';
        }
        else cout << "nao" << '\n';
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}