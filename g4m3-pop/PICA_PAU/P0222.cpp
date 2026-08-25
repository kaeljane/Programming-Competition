// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define f(i,b,e) for (ll i = (b); i < (e); i++)
#define rf(i,b,e) for (ll i = (b); i >= (e); i--)
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define uset unordered_set
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 25/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m, u, v;
string s, a, b, c;

/* (mind) 
    Time: 11min 32sec -> 18min 7sec
    Padrão: bfs, qt de "caminhos conexos" com N grande 
    
    A quantidade total de mafagrafinhos depois e 
    desmafagrafizados.
        
*/

vector<vector<ll>> adj; //
vector<bool> vis; //
vector<ll> dist; // 

void bfs(ll origem) {
    queue<ll> fila;

    vis[origem] = 1;
    dist[origem] = 0;
    fila.push(origem);

    while (!fila.empty()) {
        ll atual = fila.front();
        fila.pop();

        for (auto &v : adj[atual]) {
            if (!vis[v]) {
                vis[v] = 1;
                dist[v] = dist[atual] + 1;

                fila.push(v);
            }
        }
    }

}

void solve() {
    cin>>n>>m;
    adj.assign(n+1, vector<ll>());
    vis.assign(n+1, 0);
    dist.assign(n+1, -1);
    ans = 0;
    f (i, 0, m) {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    f (i, 1, n+1) {
        if (!vis[i]) {
            bfs(i);
            ans++;
        }
    }

    cout << ans << el;
    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}