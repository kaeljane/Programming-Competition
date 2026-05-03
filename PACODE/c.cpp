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
// 01/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>n;
    vl v(n); 
    for (ll i = 0; i < n; i++) cin>>v[i];

    ll l = 0;
    ll soma = 0;
    ll ans = 0;
    ll ans2 = 0;
    ll k = 0; //
    ll p = 1; //
    
    for (ll r = 0; r < n; r++) {
        soma += v[r];

        while (soma > k && l <= r) {
            soma -= v[l];
            l++;
        }
        ans += (r - l) + 1;
    }

    l = 0;
    soma = 0;
    for (ll r = 0; r < n; r++) {
        soma += v[r];

        while (soma > p && l <= r) {
            soma -= v[l];
            l++;
        }
        ans2 += (r - l) + 1;
    }

    cout << ans2 - ans << el;


    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}