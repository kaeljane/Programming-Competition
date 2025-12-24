// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define usect unordered_sect
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 24/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 
    Feliz navidali
    
*/
vi adj[MAXN];
bool vis[MAXN];
ii ans[MAXN]; 
ll timer = 0;

void dfs(ll u) {
    vis[u] = true;
    
    ans[u].fi = timer;
    timer++;

    for (ll v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }

    ans[u].sec = timer;
    timer++;
}

void solve() {
    cin >> n >> m;

    for (ll i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    for (ll i = 0; i < n; i++) {
        sort(all(adj[i]));
    }

    dfs(0);

    for (ll i = 0; i < n; i++) {
        cout << ans[i].fi << " " << ans[i].sec << el;
    }
}

signed main() {
    ___ 
    solve();
    
    return 0;
}