// ------------ Discipline is remembering who you said you wanted to be^^ ------------
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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 28/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a;

/* (mind) 
    4 4 8
    1 5 10 14
    2 1 8 1

    sorting em todos (b e c)
    4 4 8
    1 5 10 14
    1 1 2 8
    
    (1, 1) (1, 1) (1, 2) (5, 1) (5, 1) (5, 2)

    OK!!

    
*/
void solve() {
    cin>>n>>m>>k;
    vl b(n);
    vl c(m); 
    for (ll i = 0; i < n; i++) cin>>b[i];
    for (ll i = 0; i < m; i++) cin>>c[i];

    sort(all(b));
    sort(all(c));

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (b[i] + c[j] <= k) {
                ans++;
            }
            else {
                break;
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