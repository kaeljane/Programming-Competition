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

ll n, t, k, x, y, z, m, u, v;
string s, a, b, c;

/* (mind) 
    Ordenação Topologica 
    O material x deve ser removido antes do material y

    Saída -> "O numero Ai deve ser o número da viagem na qual foi levado o material i"

    usa BFS e Algoritmo de Kahn pq precisa detectar ciclo nessa questao, nao consegui usar dfs na ordem topologica

    1h 30m
    
*/

void solve() {
    cin>>n>>m; // materiais e anotacoes

    vector<vector<ll>> adj(n+1);
    // vector<bool> vis(n+1, false);
    vector<ll> grauInput(n+1, 0);
    vector<ll> ordemTopologica(n+1, 0);

    f (i, 0, m) {
        cin >> u >> v;
        adj[u].pb(v);
        grauInput[v]++; // com quantas setas chegam no vertice v
    }

    queue<ll> fila;

    f (i, 1, n+1) {
        if (grauInput[i] == 0) {
            fila.push(i);
        }
    }
    ll trip = 1;
    ll processados = 0;


    while (!fila.empty()) { // processa
        ll sz = fila.size();
        processados += sz;
        
        while (sz--) {
            u = fila.front();
            fila.pop();
            ordemTopologica[u] = trip; //

            for (auto & v : adj[u]) { // remove depend dos vizinhos
                grauInput[v]--;
    
                if (grauInput[v] == 0) fila.push(v); // agora ele pode ser pego
            }
        }
        
        trip++;
    

    }
    if (processados != n) cout << "NO" << el;
    else {
        f (i, 1, n+1) cout << ordemTopologica[i] << " ";
        cout << el;
    }

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}