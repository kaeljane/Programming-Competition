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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 18/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, l, c;
string s, a, b;

/* (mind) 
    
    
*/
void solve() {
    cin>>c>>l;

    vector<vector<ll>> matriz(l, vector<ll>(c, 0));

    // input's
    for (ll i = 0; i < l; i++) {
        for (ll j = 0; j < c; j++){
            cin>>matriz[i][j];
        }
    }


    vector<vector<bool>> mAdj(c+1, vector<bool>(c+1, false));

    for (ll i = 0; i < l; i++) {
        for (ll j = 0; j < c-1; j++){
            ll p1 = matriz[i][j];
            ll p2 = matriz[i][j+1];

            mAdj[p1][p2] = true;
            mAdj[p2][p1] = true;
        }
    }

    ll ans = 0;
    for (ll i = 1; i <= c; i++) {
        for (ll j = i+1; j <= c; j++){
            if (mAdj[i][j] == false) ans++;
        }
    }
    cout << ans << el;

}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}