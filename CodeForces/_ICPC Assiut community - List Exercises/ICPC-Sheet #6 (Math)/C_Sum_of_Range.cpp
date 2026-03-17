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
// 16/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    summation of all numbers between A and B (inclusive).
    summation of even numbers between A and B (inclusive).
    summation of odd numbers between A and B (inclusive).
    
*/

ll somaPA(ll a1, ll an, ll n) {
    if (!(n&1)) return (n / 2) * (a1 + an);
    else return n * ((a1 + an) / 2);
}

ll somaPA_com_razao(ll a1, ll r, ll n) {
    ll termo_interno = 2 * a1 + (n - 1) * r;

    if (n % 2 == 0) return (n / 2) * termo_interno;
    else return n * (termo_interno / 2);

}


void solve() {
    cin>>x>>y;
    ll L = min(x, y);
    ll R = max(x, y);

    ll even_count = R/2 - (L-1) / 2;
    ll odd_count = (R+1) / 2 - L / 2;

    cout << somaPA(x, y, R-L+1) << el;
    
    if (L&1) cout << somaPA_com_razao(L+1, 2, even_count) << el;
    else cout << somaPA_com_razao(L, 2, even_count) << el;

    if (!(L&1)) cout << somaPA_com_razao(L+1, 2, odd_count) << el;
    else cout << somaPA_com_razao(L, 2, odd_count) << el;

    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}