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
// 30/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 
    n -> numero de vertices
    m -> numero de arestas

    i, a, b, w

    utilizando template da biblioteca

    (3h estudando)

    41min 39sec (resolvendo)


*/

struct Aresta {
    string id; // id add
    ll u, v, peso;

    bool operator<(Aresta const& outra) {
        return peso < outra.peso;
    }

};

vector<ll> pai;
vector<ll> tamanho;

void make_set(ll v) {
    pai[v] = v;
    tamanho[v] = 1;
}

ll find_set(ll v) {
    if (v == pai[v]) 
        return v;
    return pai[v] = find_set(pai[v]);
}

void union_sets(ll a, ll b) {
    a = find_set(a);
    b = find_set(b);

    if (a != b) {
        if (tamanho[a] < tamanho[b])
            swap(a, b);
        pai[b] = a;
        tamanho[a] += tamanho[b];
    }
}

void solve() {
    cin>>n>>m;
    
    vector<Aresta> arestas(m);
    
    for (ll i = 0; i < m; i++) {
        cin >> arestas[i].id >> arestas[i].u >> arestas[i].v >> arestas[i].peso; // id add
    }

    sort(all(arestas));

    pai.resize(n + 1);
    tamanho.resize(n + 1);

    for (ll i = 1; i <= n; i++) {
        make_set(i);
    }

    // ll custo_total = 0;

    // vector<Aresta> mst; 
    vector<string> resposta_ids; // os ids estao como string!!

    for (Aresta a : arestas) {
        if (find_set(a.u) != find_set(a.v)) {
            // custo_total += a.peso;
            // mst.pb(a);
            resposta_ids.pb(a.id);
            union_sets(a.u, a.v);

        }
    }

    // INF?

    if (resposta_ids.size() == n - 1) {
        ll tam = resposta_ids.size();
        for (ll i = 0; i < tam; i++) {
            cout << resposta_ids[i] << " ";
        }
        cout << el;
    }
    else {
        cout << "INF" << el;
    }




}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}