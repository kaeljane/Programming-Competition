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
const ll INF = 2000000000000000000LL;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    - A unica forma de mitigar é tentar podar o maior número possível de folhas afetadas
    - É essencial que apenas seja cortado um único galho e que este contenha a maior 
    diferença possível entre folhas infectadas e folhas saudáveis.
    - Deveria ser rating maior

    - Considere que Si = 1 e ou a folha está saudável ou não é uma folha
        Como descobrir isso? -> vendo se o nó tem algum filho, folhas não tem filhos
            Ou seja ele nao aparece no vector de pais
    
    3h+

    matris de adjacencia  | montar arvore
    vetor de acumulados   | qt de filhos que cada no tem
    vetor de peso         | com a info se o nó está doente(1) ou saudavel(-1)
    vetor de sum          | com a resposta da dfs

    o enunciado diz uma coisa, mas é outra :,()
    ENUNCIADO : (FOLHAS DOENTES) - (FOLHAS SAUDAVEIS)
    REAL      : (FOLHAS DOENTES) - (FOLHAS SAUDAVEIS + NOS INTERNOS)

*/

ll dfs(ll u, vll &adj, vl &peso, vl &sum) {
    ll somaa = peso[u]; // comeca com o proprio peso do nó
    
    for (ll fi : adj[u]) {
        somaa += dfs(fi, adj, peso, sum);
    }

    sum[u] = somaa; // no final guarda o valor da soma no vector
    return somaa;
}

void solve() {
    cin>>n;
    vll adj(n+1);
    // map<ll, ll> acc;
    vl acc(n+1, 0);
    vl peso(n+1, 0);
    vl sum(n+1, 0); // guarda a soma da dfs.
    
    for (ll i = 2; i <= n; i++) { // construir a árvore
        cin>>x;
        adj[x].pb(i);

        acc[x]++;
    }

    for (ll i = 2; i <= n; i++) {
        cin>>y;
        if (y == 2) {
            peso[i] = 1;
        }
        else {
            peso[i] = -1;
        }
    }

    dfs(1, adj, peso, sum);
    
    ll maiorSaldo = -INF;
    ll melhorNO = INF;

    for (ll i = 2; i <= n; i++) {
        if (sum[i] > maiorSaldo) {
            maiorSaldo = sum[i];
            melhorNO = i;
        }
        else if (sum[i] == maiorSaldo) {
            if (i < melhorNO || melhorNO == INF) {
                melhorNO = i;
            }
        }
    }

    cout << melhorNO << el;



}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}