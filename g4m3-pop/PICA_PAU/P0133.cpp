// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
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
// 16/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 50min
    Padrão: arvores, DP (house robber)
    
    Summarize(resumir/descrever):
        Cortar um conjunto de pequenos brotos, que serão utilizados
        para o posterior reflorestamento. Vence quem conseguir juntar 
        os brotos cuja soma tenha o maior valor.
        
        - Um broto é uma arvore com altura 1, dois nível e trés nós.
        O valor de um brotinho é a soma do valor dos seus tres nos

          O
         | \
         O  O

        House Robber

    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
void solve() {
    cin>>n;
    // ans = 0;
    
    if (n < 2) {cout << 0 << el; return;}
    
    vector<ll> somaNivel(n, 0);
    f (i, 0, n) {
        ll p = (1 << i);
        f (j, 0, p) {
            cin>>x;
            somaNivel[i] += x;
        }
    } 

    vector<ll> dp(n+2, 0);
    // n - 2 é o nivel mais baixo para ser a raiz de um broto
    rf (i, n - 2, 0) {
        // "Vale mais a pena ignorar esse nível ou usa-lo para formar brotos?"
        ll pulo = dp[i+1]; // escolha de nao cortar

        // cortar ganha os valores de i e i+1 o dp[i+2] é a resposta que ja foi acumulada
        ll agrupar = somaNivel[i] + somaNivel[i+1] + dp[i+2];

        dp[i] = max(pulo, agrupar); 
    }

    cout << dp[0] << el; 
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}