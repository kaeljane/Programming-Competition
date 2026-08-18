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

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;

/* (mind) 
    Time: 20min 27sec
    Padrão: mst, kruskal
    
    Summarize(resumir/descrever):
        
        
    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/

struct Aresta {
    ll u, v, peso;
    string id;
    bool operator<(Aresta const& outra) {
        return peso < outra.peso;
    }
};

struct DSU {
    vector<ll> pai, tamanho;

    DSU(ll n) {
        pai.assign(n + 1, 0);
        tamanho.assign(n + 1, 1);
        f (i, 1, n+1) pai[i] = i;
    }

    ll find_set(ll v) {
        if (v == pai[v]) return v;
        return pai[v] = find_set(pai[v]);
    }

    bool union_sets(ll a, ll b) {
        a = find_set(a);
        b = find_set(b);
        if (a != b) {
            if (tamanho[a] < tamanho[b]) swap(a, b);
            pai[b] = a;
            tamanho[a] += tamanho[b];
            return true;
        }
        return false;
    }

};

void solve() {
    cin>>n>>m;
    // ans = 0;
    // vl v(n); f (i, 0, n) cin>>v[i];
    vector<Aresta> arestas(m);
    f (i, 0, m) {
        cin >> arestas[i].id >> arestas[i].u >> arestas[i].v >> arestas[i].peso;
    }

    sort(all(arestas));

    DSU dsu(n);

    ll custo_total = 0;
    ll arestas_usadas = 0;
    vector<Aresta> mst;

    for (auto a : arestas) {
        if (dsu.union_sets(a.u, a.v)) {
            custo_total += a.peso;
            arestas_usadas++;
            mst.pb(a);

            if (arestas_usadas == n - 1) break;
        }
    }

    if (arestas_usadas < n - 1 && n > 1) {
        cout << "INF" << el;
    } 
    else {
        f (i, 0, mst.size()) {
            cout << mst[i].id << " ";
        }
        cout << el;
    }
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}