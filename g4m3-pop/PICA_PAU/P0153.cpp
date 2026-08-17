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
// 17/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 7min 40sec -> 8min 28sec
    Padrão: dfs basica, componentes conexos
    
    Summarize(resumir/descrever):
        
        
    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/

vector<bool> vis;
vector<vector<ll>> adj;
void dfs (ll u) {
    vis[u] = 1;

    for (auto &v : adj[u]) {
        if (!vis[v]) {
            dfs(v); // dei um return do nada aqui oxi
        }
    }
}

void solve() {
    cin>>n;
    ans = 0;
    adj.assign(n+1, vector<ll>());
    vis.assign(n+1, 0);

    f (i, 0, n-1) {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    f (i, 1, n+1) {
        if (!vis[i]) {
            ans++;
            dfs(i);
        }
    }

    if (ans > 1) 
        cout << "NO" << el;
    else cout << "YES" << el;
    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}