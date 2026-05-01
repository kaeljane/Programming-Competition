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
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m, a, b;
string s, c;

/* (mind) 
    Quantas ilhas isoladas (Componentes Conexas) existem neste grafo inteiro?
    É usado a BFS (Busca em largura) porque a missão principal é espalhar.

    Não pode usar a DFS por causa da entrada N pode chegar a 1.000.000

    template BFS

    50min 34sec
    que bombaaaaaaaaaaa
    
*/

vector<ll> adj[MAXN];
bool visitado[MAXN];
ll distancia[MAXN];

void bfs(ll origem) {
    queue<ll> fila;

    visitado[origem] = true;
    distancia[origem] = 0;
    fila.push(origem);

    while(!fila.empty()) {
        ll atual = fila.front();
        fila.pop();

        for (ll vizinho : adj[atual]) {
            if (!visitado[vizinho]) {
                visitado[vizinho] = true;
                distancia[vizinho] = distancia[atual] + 1;
                fila.push(vizinho);
            }
        }
    }
}


void solve() {
    // a partir daqui é parecido com a questao de DFS
    cin>>n>>m;
    for (ll i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    // template boa prática
    for (ll i = 1; i <= n; i++) {
        visitado[i] = false;
        distancia[i] = -1;
    }
    ll gruposConexos = 0; 
    for (ll i = 1; i <= n; i++) {
        if (!visitado[i]) {
            bfs(i);
            gruposConexos++;
        }
    }

    cout << gruposConexos << el;

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}