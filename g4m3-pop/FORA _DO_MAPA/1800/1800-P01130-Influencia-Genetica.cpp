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

ll n, t, k, x, y, z, m, u, v, w;
string s, a, b, c;

/* (mind) 
    - Garantir a sobrevivencia da raça humana
    - É conhecida toda ligação direta (e custo) entre pares de 
    humano-base X e Y
    . Esta ligação é simétrica.
    - > Cada individuo tem um ID unico 
        -> consistindo em N numeros indicando o grau de parentesco
        (distancia) com cada um dos N humanos-base

        RISCO -> existe uma pequena qt de humanos-base, existe o 
        risco dos novos individuos serem sempre gerados de pessoas
        geneticamente proximas 

    OLHAR LIMITES DA QUESTAO <- indica floyd-warshal

    Distancia de A -> x + Distancia de X até Y + Distancia de Y -> B

    N -> Humanos-Base
    M -> Relac entre eles
    
    O Mundo Antigo
    
    O Mundo Novo
    Ai.... 
    Bi.... 

    2h 36min

*/
void solve() {
    cin>>n>>m;
    vector<vector<ll>> dist(n+1, vector<ll>(n + 1, INF));

    f (i, 1, n + 1) {
        dist[i][i] = 0;
    }

    f (i, 0, m) {
        cin>>u>>v>>w;

        dist[u][v] = min(dist[u][v], w);
        dist[v][u] = min(dist[v][u], w);
        
    }

    f (k, 1, n+1) {
        f (i, 1, n+1) {
            f (j, 1, n+1) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    vector<ll> A(n+1);
    vector<ll> B(n+1);
    
    f (i, 1, n+1) cin>>A[i];
    f (i, 1, n+1) cin>>B[i];

    ll ans = INF;

    f (x, 1, n+1) {
        f (y, 1, n+1) {
            if (dist[x][y] < INF) {
                ans = min(ans, A[x] + dist[x][y] + B[y]);
            }
        }
    }

    cout << ans << el;


    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}