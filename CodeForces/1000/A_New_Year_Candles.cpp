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
// 21/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, a, b;
string s, c;

/* (mind) 
    Time: 16min 22sec -> 27min 25sec
    Padrão: 

    a candies
    b 

    [v [v] [n] n] n n m v v

    v v
    n v 
    n v 
    n 
    entendi se for assim

    b é o agrupamento se for impar nao dar para 
    criar mais uma, se for par sim... Nao só 
    funciona se b for dois

    4 / 2 = 2

    v v v 
    n v v
    n v 

    entendi!!

    6 / 3 = 2

    serase é assim

    fazer com while mesmo
    
*/
void solve() {
    cin>>a>>b;

    ll qtAtual = 0;
    ll qtCandies = a;

    while (a > 0) {
        qtAtual++;
        a--;
        if (qtAtual == b) {
            ans++;
            qtAtual = 1;
        }
    }

    cout << ans + qtCandies << el;
    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}