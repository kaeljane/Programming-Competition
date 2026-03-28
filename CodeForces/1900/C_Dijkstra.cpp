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
// 12/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 
    treinando Dijkstra

    grafo nao direcionado com pesos

    vertices enumerados de 1 - n
    Encontrar o caminho mais curto entre o vértice 1 e o vértice n
    
    n m (n: numero de vertices, m: numero de arestas)
    Ai, Bi, Wi... m 

    Ai e Bi extremidade da aresta
    Wi tamanho da aresta

*/



void solve() {
    cin>>n>>m;

    // lista de adjacencia
    vector<vector<ii>> adj(n+1);
    for (ll i = 0; i < m; i++) {
        ll u, v, w;
        cin>>u>>v>>w;
        // O grafo deste problema é bidirecional (mao dupla)
        adj[u].pb({w, v}); // o tamanho foi primeiro
        adj[v].pb({w, u}); //
        
    }
    // vector de distanci (inicia com INF)
    vector<ll> dist(n+1, INF);

    // vector para lembrar o caminho (inicia com -1) // lembrar dos exemplos do livro
    vector<ll> pai(n+1, -1);

    dist[1] = 0; // a distancia da origem (1) pra ela memso é 0

    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0, 1}); // {distiancia_acumulada, cidade_atual}

    while (!q.empty()) { // enquanto houver "vertices" a ser processados
        auto [d_atual, u] = q.top();
        q.pop();

        // otimizacao se ja achou um caminho melhor antes ignore este
        if (d_atual > dist[u]) continue;

        // visitando vizinhos...
        for (auto [w_aresta, v] : adj[u]) {
            // se a distancia ate min + a rua for menor que a distancia do vizinho
            if (dist[u] + w_aresta < dist[v]) { 
                dist[v] = dist[u] + w_aresta; // Atualiza o placar
                pai[v] = u;                   // anota de onde veio
                q.push({dist[v], v});         // joga na fila
            }
        }
    }

    // se nao tem caminho
    if (dist[n] == INF) {
        cout << -1 << el;
        return;
    }

    // reconstruindo o caminho do final para o começo
    vector<ll> caminho;

    for (ll v = n; v != -1; v = pai[v]) {
        caminho.pb(v);
    } 
    // deixanod o caminho do inicio -> fim
    reverse(all(caminho));

    for (auto &x : caminho) {
        cout << x << " ";
    }
    cout << el;


        
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}