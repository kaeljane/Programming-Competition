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
// 10/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 26min 37sec
    Padrão: prefix, sufixo, minPrefixo (modo dificil), prefix + forca bruta (fácil)


*/
void solve() {
    cin>>n;
    ans = -INF;
    vector<ll> pref(n+1, 0);
    
    vl v(n); f (i, 0, n) cin>>v[i];
    f (i, 1, n+1) {
        pref[i] = pref[i-1] + v[i-1];
    }
    
    
    for (ll a = 0; a < n; a++) {
        for (ll b = a; b < n; b++) {
            for (ll c = b; c >= 0; c--) {
                for (ll d = c; d < n; d++) {
                    ans = max(ans, (pref[b+1] - pref[a]) + (pref[b+1] - pref[c]) + (pref[d+1] - pref[c]));
                }
            }
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