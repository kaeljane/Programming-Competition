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
// 09/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, b, c;

/* (mind) 
    DP 2D de Contagem de Estados (Sequence/State DP)

    1. Em qual índice do array nós estamos?
    2. Qual foi o valor que nós colocamos na casa anterior?
    Por isso ela é bidimensional

    dp[i][v] = De quantas maneiras válidas eu consigo preencher o
    array até o indice i, garantindo que o número na posição i seja 
    exatamente v

    Regra de ouro |x[i] - x[i-1]| <= 1
    Isso significa que, se vc dicidiu que o elemento atual (no idx i)
    vai ser o número v, o elemento anterior (no idx i-1) obrigatoriamente
    só pode ter sido uma dessas três opções:
        (v - 1) Um degrau abaixo
        (v)     No mesmo nível
        (v + 1) Um degrau acima 

    Então para achar o valor de dp[i][v] é simplesmente somar essas três
    realidades do passado:
    dp[i][v] = dp[i - 1][v - 1] + dp[i - 1][v] + dp[i - 1][v + 1]

    Lidando com o zero:
        O 0 no enunciado significa "desconhecido" (pode ser qualquer 
        numero de 1 a m).
        
        Se a posição atual do array for 0, nós testamos todas as 
        realidades possíveis para ela (varremos v de 1 até m)
        
        Se a posição atual for um número fixo (ex: 2) nós só calculamos a 
        transição para v = 2. Todas as outras possibilidades para aquele
        índice continuam valendo zero, pois são impossíveis.


    


    
*/
void solve() {
    cin>>n>>m;
    vl a(n); f (i, 0, n) cin>>a[i];
    
    // dp[i][v] = formas de preencher até o idx 'i', terminando no valor 'v'
    // criamos a matriz com colunas indo até m + 2 para evitar estourar o
    // limite ao checar v+1
    vector<vector<ll>> dp(n, vector<ll> (m + 2, 0));

    if (a[0] == 0) {
        // Se for curinga, existe 1 forma de ele ser qualquer valor [1,m]
        f (v, 1, m+1) {
            dp[0][v] = 1;
        }
    }
    else {
        // Se for fixo, existe 1 forma de ele ser exatamente aquele valor
        dp[0][a[0]] = 1;
    }

    f (i, 1, n) {
        // Se for curinga, calculamos a DP para todos os valores 'v' possiveis
        if (a[i] == 0) {
            f (v, 1, m+1) {
                // soma as realidades do passado com cuidado com o MOD
                dp[i][v] = ((dp[i-1][v-1] + dp[i-1][v] ) % MOD 
                            + dp[i-1][v+1]) % MOD;
            }

        }
        else {
            // Se o número for fixo na entrada, só fazemos a conta para ele
            ll v = a[i];
            dp[i][v] = ((dp[i-1][v-1] + dp[i-1][v]) % MOD + dp[i-1][v+1]);
        }
    }

    // A resposta é a soma de todas as formas válidas de terminar o ultimo
    // elemento
    ll ans = 0;
    f (v, 1, m+1) {
        ans = (ans + dp[n-1][v]) % MOD;
    }

    cout << ans << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}