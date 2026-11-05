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
// 24/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m, f;
string s, a, b, c;

/* (mind) 
    colocar as suas mercadorias em todas as lojas da famosa avenida TS

    N (qt de lojas)
    M (dias) 
    F (lojas)

    tive um pouco de dificuldade
    59min 5sec

*/

void solve() {
    cin>>n>>m>>f;
    cin>>s;
    ll qtZerus = 0;
    ll ans = 0;

    f (i, 0, n) {
        if (s[i] != 'X') {
            qtZerus++;

        }
        else {
            // fazer o calculo da ilha
            ans += (qtZerus + (2 * m + 1) - 1) / (2 * m + 1); // divisao por teto
            qtZerus = 0;
        }
    }
    if (qtZerus > 0){
        ans += (qtZerus + (2 * m + 1) - 1) / (2 * m + 1);
    }

    // f é a qt maxima

    if (ans <= f) cout << "YES" << el;
    else cout << "NO" << el;


}

signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}