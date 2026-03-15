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
// 14/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>n;
    vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];

    for (ll i = 0; i < n-2; i++) {
        if (v[i] < v[i+1] && v[i+1] > v[i+2]) {
            cout << "YES" << el;
            cout << i+1 << " " << i+2 << " " << i+3 << el;
            return;
        }
    }

    auto it = max_element(all(v));

    // idxMax
    ll kIdx = it - v.begin();
    ll iIdx = -1, jIdx = -1;
    
    for (ll i = 0; i < kIdx; i++) {
        if (v[i] < v[kIdx]) {
            iIdx = i+1;
            break;
        }
    }

    for (ll i = kIdx+1; i < n; i++) {
        if (v[kIdx] > v[i]) {
            jIdx = i+1;
            break;
        }
    }
    
    if (iIdx == -1 || jIdx == -1) {
        cout << "NO" << el;
        return;
    }
    
    cout << "YES" << el << iIdx << " " << kIdx+1 << " " << jIdx << el;


}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}