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
// 09/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m, u, v;
string s, a, b, c;

/* (mind) 
    - Promover ainda mais conexoes
    - Cada participante pode entregar um presente para quem nao 
    conhecia antes do evento
    -> A sequencia de troca de presentes deverá formar um ciclo
    hamiltoniano...

    Todas as participantes vão entregar e também receber um presente
    -----> última pessoa que receberá o presente será aquela que 
            realizou a primeira entrega.

    -> Nenhuma participante entregará um presente a si mesma.
    -> Cada participante receberá EXATAMENTE um presente.

    vetor de pais...?
    vetor de grau (grauInput da outra questao)

    N : numero de relações
    M : descrição destas relações

    vetor grauInput so deve ter 1 como valor em todos os nós
    + dfs para contar a qt de ciclo precisa ser so valor 1 esse ciclo
    
    É NAO DAAA
    "EXISTE ALGUM CAMINHO ESCONDIDOOOOOOO DENTRO DESSAS OPÇÕES QUE 
    FORME UM CÍRCULO PERFEITO?" A PERGUNTA É ESSA!!!!

    1h 18min 34sec 

*/
vector<vector<bool>> conhece;
vector<vector<ll>> adj;
vector<bool> vis;

bool dfs_hamiltoniano(ll atual, ll visitados, ll origem) {
    // 1 cond parada
    if (visitados == n) {
        if (!conhece[atual][origem]) {
            return true;
        }
        return false;
    }

    // 2 pintando
    vis[atual] = 1;

    for (ll v : adj[atual]) {
        if (!vis[v]) {
            if (dfs_hamiltoniano(v, visitados + 1, origem)) {
                return true;
            }
        }
    }

    vis[atual] = 0;
    return false;

}

void solve() {
    cin>>n>>m;
    if (n <= 1) {cout << "N" << el; return;}
	conhece.assign(n+1, vector<bool>(n+1, false));
    adj.assign(n+1, vector<ll>());
    vis.assign(n+1, false);

    f (i, 0, m) {
        cin >> u >> v;
        conhece[u][v] = 1; conhece[v][u] = 1;
    }
    
    f(i, 1, n+1) {
        conhece[i][i] = 1;
        f(j, 1, n+1) {
            if (i != j && !conhece[i][j]) { // se eles nao se conhece
                adj[i].pb(j);
            }
        }
    }

    if (dfs_hamiltoniano(1, 1, 1)) {
        cout << "S" << el;
    }
    else {
        cout << "N" << el;
    }



}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();
    
    return 0;

}
