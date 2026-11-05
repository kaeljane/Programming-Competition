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
// 01/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    reflorestamento
    dada uma árvore, seu trabalho é cortar um conjunto de pequenos brotos,
    que serão utilizados para o posterior reflorestamento

    -> Vence quem conseguir juntar os brotos cuja soma tenha o maior valor.
    
    1h 54min    

*/
void solve() {
    cin>>n;
    vl v; 
    
    vl somaNivel(n, 0);
    f (i, 0, n) {
        ll poww = pow(2, i);
        f (j, 0, poww) {
            cin>>x;
            somaNivel[i] += x;
        }
    }

    vl dp(n+2, 0);
    
    rf (i, n-2, 0) {
        ll pulo = dp[i+1];

        ll agrupar = somaNivel[i] + somaNivel[i+1] + dp[i+2];

        dp[i] = max(pulo, agrupar);

    }

    cout << dp[0] << el;

    // f (i, 0, n) {
    //     cout << "somaNivel: " << i << " " << somaNivel[i] << el;
    // }

    // f (i, 0, n+2) {
    //     cout << "dp: " << i<< " " << dp[i] << el;
    // }


}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}