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
// 07/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, k2, k3, k5, k6;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin >> k2 >> k3 >> k5 >> k6;
    
    ll qtd_256 = min({k2, k5, k6});
    ll k2Rest = k2 - qtd_256;
    ll qtd_32 = min(k2Rest, k3);
    ll resposta = (qtd_256 * 256) + (qtd_32 * 32);
    
    cout << resposta << el;
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}