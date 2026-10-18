#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

vector<vector<ll>> adj;
vector<bool> vis;

bool sorte(ll n) {
    string s = to_string(n);

    for (ll i = 0; i < s.size(); i++) {
        if (s[i] != '4' && s[i] != '7') {
            return false;
        }
    }
    return true;
}
ll tamanho = 0;

void dfs(ll u) {
    vis[u] = 1;
    
    tamanho++;
    for (auto x : adj[u]) {
        if (!vis[x]) {
            dfs(x);
        }
    }
}


void solve() {
    ll n, u, v, w; cin>>n;

    adj.assign(n+1, vector<ll>());
    vis.assign(n+1, 0);

    for (ll i = 0; i < n-1; i++) {
        cin>>u>>v>>w;

        if (!sorte(w)) {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    ll total = 0;
    for (ll i = 1; i <= n; i++) {
        if (!vis[i]) {
            tamanho = 0;
            dfs(i);
            // ele já vai ter passado por tudo e tamanho terá um valor!!
            // cout << tamanho << '\n';
            total += tamanho * (n - tamanho) * (n - tamanho - 1);
        }
    }

    cout << total << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}