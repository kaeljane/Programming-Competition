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
// 04/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, somaBloco = 0;
string s, a, b, c;

/* (mind) 
    Xeigo se encontrou com Tupã (o Deus criador)
    Conversou com ele durante 100 dias 
    Depois desse 100 dias Tupã resolveu indicar o caminho para a saída da floresta.
    jogo de tupã
    Caso mova para um buraco a pedra precioso desaparece.
    Escolher um buraco colocar todas as pedras nele e oq conseguir pegar vai ser dele.

    Componentes Conexos!!!!
    MAS COMO? NAO TO ENTENDENDO O INPUT
    Soma máxima de cada grupo formado? grafo conexo formado?
    vetor de direção - MARATONA UFMG
    Questão para aprender

    2h 45min (tentando entender, pesquisando, aprendendo com a pesquisa )
*/

// vector<ll> adj[MAXN];
vector<ll> vL = {-1, 1, 0, 0}; // variacao na linha
vector<ll> vC = {0, 0, -1, 1}; // variacao na coluna
vector<vector<bool>> vis;

void dfs(ll l, ll c, vll &adj, ll &somaBloco, set<pair<ll, ll>> &buracosVizinhos) {
    vis[l][c] = true;

    somaBloco += adj[l][c];

    for (ll i = 0; i < 4; i++) {
        ll nL = l + vL[i];
        ll nC = c + vC[i];

        if (nL >= 0 && nL < n && nC >= 0 && nC < 2) {
            if (adj[nL][nC] && !vis[nL][nC]) {
                dfs(nL, nC, adj, somaBloco, buracosVizinhos);
            }
            else if (adj[nL][nC] == 0) {
                buracosVizinhos.insert({nL, nC}); // anota coord
            }
        }


    }

}

void solve() {
    cin>>n;
    vector<vector<ll>> adj(n, vector<ll>(2, 0));
    vis.assign(n, vector<bool>(2, false));

    for (ll i = 0; i < n; i++) {
        cin>>adj[i][0]>>adj[i][1];
    }

    vll potencialBuracos(n, vl(2, 0));
    // variavel, inicio, final
    f (i, 0, n) { // linha
        f (j, 0, 2) { // coluna
            if (adj[i][j] && !vis[i][j]) {
                somaBloco = 0;
                set<pair<ll, ll>> buracos;
                dfs(i, j, adj, somaBloco, buracos);
                for (auto &x : buracos) {
                    potencialBuracos[x.first][x.second] += somaBloco;
                }
            }
        }
    }
    ll ans = -INF;
    f (i, 0, n) {
        f (j, 0, 2) {
            ans = max(ans, potencialBuracos[i][j]);
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