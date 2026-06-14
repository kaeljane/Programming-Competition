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
// 14/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    Mochila 0/1
    "0/1" significa binário
        so tem duas opcoes:
            (0) voce ignora o livro
            (1) voce compra o livro
    A diferença dessa questao para as da moeda é que você só pode comprar
    cada livro no máximo uma vez.
    
    dp[j] vai guardar o maximo de paginas possivel gastando j dinheiros

    Nós já sabemos que, para evitar repeticoes (combinações), o laço de fora
    deve ser o dos itens (os livros) e o laço de dentro deve ser o do dinheiro.

    Uma armadrilha: se você varrer o laço do dinheiro da esquerda para a 
    direita (do 0 a X), você vai usar o mesmo livro duas vezes.


    
*/
void solve() {
    cin>>n>>x;
    
    vector<ll> precos(n); f(i,0,n) cin>>precos[i];
    vector<ll> paginas(n); f(i,0,n) cin>>paginas[i];

    // dp[j] armazena o maximo de paginas conseguidas gastando ''j'
    // inicializa com 0, pois começas com 0 páginas.

    vector<ll> dp(x + 1, 0);

    f (i, 0, n) { // passamos por cada livro
        ll preco_atual = precos[i];
        ll pags_atuais = paginas[i];

        rf (j, x, preco_atual) {
            dp[j] = max(dp[j], dp[j - preco_atual] + pags_atuais);
        }
    }
    // pegando o valor maximo que está na dp.
    ll maxPaginas = 0;
    f (j, 0, x+1) {
        maxPaginas = max(maxPaginas, dp[j]);
    }

    cout << maxPaginas << el;


    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}