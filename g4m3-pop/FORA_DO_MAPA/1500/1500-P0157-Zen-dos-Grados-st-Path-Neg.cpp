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
// 03/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, u, m;
string s, a, b, c;

/* (mind) 
    Bellman-Ford 
    17min 3
    
*/
struct Aresta {
    ll u, v, w;
};

void solve() {
    cin>>n>>m;
    
    vector<Aresta> arestas(m);
    for (ll i = 0; i < m; i++) {
        cin >> arestas[i].u >> arestas[i].v >> arestas[i].w;
    }

    ll origem = 1;
    vector<ll> dist(n+1, INF);
    dist[origem] = 0;

    for (ll i = 1; i < n; i++) {
        bool mudou = false;

        for (Aresta a : arestas) {
            if (dist[a.u] != INF && dist[a.u] + a.w < dist[a.v]) {
                dist[a.v] = dist[a.u] + a.w;
                mudou = true;
            }
        }
        if (!mudou) break;
    }

    for (ll i = 1; i < n; i++) { // ciclo?
        for (Aresta a : arestas) {
            if (dist[a.u] != INF && dist[a.v] != -INF) {
                if (dist[a.u] == -INF || dist[a.u] + a.w < dist[a.v]) {
                    dist[a.v] = -INF;
                }
            }
        }
    }

    if (dist[n] == -INF) {
        cout << "-INF" << el;
    }
    else {
        cout << dist[n] << el;
    }
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}