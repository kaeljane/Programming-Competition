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
// 01/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    de TODOS para TODOS -> Floyd-Warshall
    
    57min 57sec
*/

void solve() {
    cin>>n;

    // vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];

    vector<vector<ll>> dist(n+1, vector<ll>(n+1, INF));
    // vector<vector<ll>> adj(n);

    // inicializando
    for (ll i = 1; i <= n; i++) {
        dist[i][i] = 0;
    }

    for (ll u = 1; u <= n; u++) {
        for (ll v = 1; v <= n; v++) {
            cin>>x; // peso (custo)
            if (x == 0) x = INF;
            
            dist[u][v] = min(dist[u][v], x);
        }
    }

    // algoritmo 
    for (ll k = 1; k <= n; k++) {
        for (ll i = 1; i <= n; i++) {
            for (ll j = 1; j <= n; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                } 
            }
        }
    }
    vector<ll> ans;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            ans.pb(dist[i][j]);
        }
    }

    sort(all(ans));
    
    if (ans.back() == INF) {
        cout << "INF" << el;
    }
    else {
        cout << soma(ans) << el;
    }

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}