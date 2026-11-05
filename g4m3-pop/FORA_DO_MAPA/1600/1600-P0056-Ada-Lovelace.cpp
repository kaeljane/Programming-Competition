// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
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
// 04/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, v;
string s, a, b, c;
char doisPontos;

/* (mind) 
    O algoritmo termina? dfs
    u, v
    
    X: Y | (Y -> X)
    o mais chato foi o input 
    
    1h

*/
void solve() {
    cin>>n;
    getline(cin, c); // lixo '\n'
    vector<vector<ll>> adj(n + 1);
    vector<bool> vis(n+1);

    f (i, 1, n+1) {
        getline(cin, s);
        stringstream ss(s);

        ss >> x >> doisPontos;
        
        while (ss >> y) {
            adj[y].pb(x);
        }
    } 
    
    function <void(ll)> dfs = [&](ll u) {
        vis[u] = true;
        for (ll v : adj[u]) {
            if (!vis[v]) dfs(v);
        }
    };

    dfs(1);

    if (vis[n]) cout << "VERY GOOD PROGRAM!" << el;
    else cout << "TOO BAD..." << el;

}

signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}