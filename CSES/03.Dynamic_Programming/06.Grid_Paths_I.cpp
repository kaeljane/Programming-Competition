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
    Se mover so para a direita ou para baixo
    para chegar em (i, j)
    vc so pode ter vindo de (i-1, j) ou (i, j-1)

    portanto a regra de ouro de CP é 
    -> o numero de formas de chegar na casa atual é a soma
    das formas de chegar na casa de cima com as formas
    de chegar na cada da esqurda

    dp[i][j] = dp[i-1] + dp[i][j-1]

    o caso base:
    A casa inicial é (0,0) (canto superior esquerdo)
    Só existe 1 forma de estar lá: nascendo lá. dp[0][0] = 1
        Se a própria casa (0,0) tiver uma armadilha *, o rato 
        já nasce morto. O total de caminho para o final é 0.
    
    Se durante os laços você encontrar um * na casa (i,j),
    você simplesmente pula ela. O valor na matriz dp para 
    aquela casa continuará sendo 0 (indicando que não há 
    nenhuma forma de passar por ali), e esse 0 nao vai somar
    nada nas casas seguintes.



*/
void solve() {
    cin>>n;
    vector<string> grid(n); f(i,0,n) cin>>grid[i];
    
    vector<vector<ll>> dp(n, vector<ll>(n,0));

    dp[0][0] = 1;

    if (grid[0][0] == '*')  {
        cout << 0 << el;
        return;
    }

    f (i, 0, n) {
        f (j, 0, n) {
            if (grid[i][j] == '*') continue;

            if (i > 0) {
                dp[i][j] += dp[i-1][j];
                if (dp[i][j] >= MOD) dp[i][j] -= MOD;

            }
            if (j > 0) {
                dp[i][j] += dp[i][j-1];
                if (dp[i][j] >= MOD) dp[i][j] -= MOD;
            }
        }
    }

    cout << dp[n-1][n-1] << el;

    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}