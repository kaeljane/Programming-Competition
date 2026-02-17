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
// 17/02/2026 by Kaeljane
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
    vector<string> ma(n);
    
    // input's
    for (ll i = 0; i < n; i++) cin>>ma[i];

    vector<string> maSec = ma;

    for (ll j = 0; j < n - 1; j++) {
        maSec[0][j+1] = ma[0][j];
    }
    for (ll i = 0; i < n - 1; i++) {
        maSec[i+1][n-1] = ma[i][n-1];
    }
    for (ll j = 1; j < n; j++) {
        maSec[n-1][j-1] = ma[n-1][j];
    }
    for (ll i = 1; i < n; i++) {
        maSec[i-1][0] = ma[i][0];
    }

    for (auto &x : maSec) cout << x << el;


    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}