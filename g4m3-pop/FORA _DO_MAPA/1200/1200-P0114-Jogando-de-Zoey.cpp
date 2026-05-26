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
// 26/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
// string s, a, b, c;

/* (mind) 
    1h 11min 33sec
    crazyyy
    
*/
void solve() {
    cin>>n;
    vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    
    vl pref(n+2, 0);
    vl minPref(n+2, 0);
    vl suf(n+2, -INF);

    f (i, 1, n+1) {
        pref[i] = pref[i-1] + v[i-1];
    }

    f (i, 1, n+1) {
        minPref[i] = min(minPref[i-1], pref[i]);
    }

    rf (i, n, 1) {
        suf[i] = max(suf[i+1], pref[i]);
    }

    ll ans = -INF; // queremos o maximoooooo

    f (b, 1, n+1) {
        f (c, 1, b+1) {
            ll melhorA = minPref[b-1];
            ll melhorD = suf[c];
            ll atual = 2 * pref[b] - 2 * pref[c-1] + melhorD - melhorA;

            ans = max(ans, atual);
        }
    }

    cout << ans << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}