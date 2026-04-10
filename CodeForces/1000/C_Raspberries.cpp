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
// 10/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    49m 28s
    
*/
void solve() {
    cin>>n>>k;
    vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    
    if (k == 2 || k == 3 || k == 5) {
        ll ans = INF;
        bool uu = false;
        for (ll i = 0; i < n; i++) {
            if (v[i] % k == 0) {
                uu = true;
                break;
            }
            ans = min(ans, k - (v[i] % k));
        }
        if (uu) cout << 0 << el;
        else cout << ans << el;
    }
    else {
        ll qtDDois = 0;
        bool uu = false;
        bool uuu = false;
        for (ll i = 0; i < n; i++) {
            if (v[i] % 4 == 0) {
                uu = true;
            }
            else if ((v[i] + 1) % 4 == 0) {
                uuu = true;
            }
            else if (v[i] % 2 == 0) {
                qtDDois++;
            }
        }
        if (uu) cout << 0 << el;
        else if (qtDDois >= 2) {
            cout << 0 << el;
        }
        else if (uuu) {
            cout << 1 << el;
        }
        else if (qtDDois == 1) {
            cout << 1 << el;
        }
        else {
            cout << 2 << el;
        }
    }

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}