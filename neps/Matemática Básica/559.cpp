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
// 28/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m;
string s, a, b, c;

/* (mind) 
    Time: 
    Padrão: math basica / teoria dos jogos
    
    Variação clássica da Jogo de Nim (especialmente o jogo da 
    subtração de Bachet).

    O truque para garantir a vitória é sempre forçar o
    adversário a ficar em uma posição múltipla de (m+1).

    A Estrategia de Paula: 
        Como Paula começa jogando, ela quer deixar no saco uma qt
        de chocolates que seja múltiplo de (m + 1). A partir daí,
        qualquer qt K que Carlos tira (m + 1 - k) e mantem o controle 
        até o final.

    Se B for multiplo de (M + 1) isto é (N % (m+1) == 0):
    Paula é forçada a tirar entre 1 e M chocolates na primeira jogada.
    Isso faz com que a qt restante deixe de ser múltiplo de M + 1, 
    entregando a posição vencedora de bandeja para Carlos. Carlos vence

    Caso contrário: Paula tira exatamente o resto da divisão 
    ( N % (m+1)) na primeira rodada. O numero restante vira um múltiplo
    de (m+1) e ela assume o controle total do jogo.
 
        
*/
void solve() {
    cin>>n>>m;
    
    if ( n % (m+1) == 0) cout << "Carlos" << el;
    else cout << "Paula" << el;

}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}