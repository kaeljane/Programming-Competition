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

ll n, t, k, x, y, z, ans, m, a, b, w;
string s;

/* (mind) 
    Time: 17min
    Padrão: dijkstra
    
    Summarize(resumir/descrever):
        ir de 
        s = 1 ->
        t = N
        
    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/

vector<vector<pair<ll, ll>>> adj;
vector<ll> dist;

void dijkstra(ll origem, ll n) {
    dist.assign(n+1, INF);
    dist[origem] = 0;

    priority_queue<ii, vector<ii>, greater<ii>> pq;

    pq.push({0, origem});

    while (!pq.empty()) {
        ll d = pq.top().fi;
        ll u = pq.top().sec;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto aresta : adj[u]) {
            ll v = aresta.fi;
            ll peso = aresta.sec;

            if (dist[u] + peso < dist[v]) {
                dist[v] = dist[u] + peso;
                pq.push({dist[v], v});
            }
        }
    }
}

void solve() {
    cin>>n>>m;
    
    adj.assign(n+1, vector<ii>());
    f (i, 0, m) {
        cin>>a>>b>>w;
        adj[a].pb({b, w});
        adj[b].pb({a, w});
    }
    
    dijkstra(1, n);

    cout << dist[n] << el;
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}