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
// 28/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    maximo = 9999
    
*/
// vector<ll> validos;
// void pre_computer() {
//     for (ll i = 0; i < 100; i++) {
//         validos.pb(i);
//     }
// }

void solve() {
    cin>>n;
    
    ll l = 0, r = 99;

    while (l <= r) {
        ll meio = l + (r-l) / 2;

        if (meio*meio == n) {
            if (n < 10) {
                cout << 0 << " " << meio << el;
            }
            else {
                if (meio&1) cout << meio/2 << " " << meio/2 + 1 << el;
                else cout << meio/2 << " " << meio/2 << el;
            }
            return;
        }
        else if (meio*meio < n) {
            l = meio+1;
        }
        else {
            r = meio-1;
        }
    }
    cout << -1 << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}