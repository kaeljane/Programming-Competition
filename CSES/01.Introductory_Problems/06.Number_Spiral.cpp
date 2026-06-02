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
// 02/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    5min 33sec
    (z-1)² até z²
    par   : cresce de cima  -> baixo
    impar : cresce de baixo -> cima
    
*/
void solve() {
    cin>>n;
    
    // vll mat = {
    //     {1, 2, 9, 10, 25},
    //     {4, 3, 8, 11, 24},
    //     {5, 6, 7, 12, 23},
    //     {16, 15, 14, 13, 22},
    //     {17, 18, 19, 20, 21}
    // };

    f (i, 0, n) {
        cin>>y>>x;
        z = max(x, y); // camada
        ll max_ant = (z-1) * (z-1);

        ll ans;
        if (!(z&1)) {
            if (y > x) {
                ans = z*z - x + 1;
            }
            else {
                ans = max_ant + y;
            }
        }
        else {
            if (y > x) {
                ans = max_ant + x;
            }
            else {
                ans = z*z - y + 1;
            }
        }

        cout << ans << el;
    }



    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}