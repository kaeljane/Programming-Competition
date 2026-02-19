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
// 19/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    revision
    
*/
void solve() {
    cin>>n>>a>>b;

    ll qt = 0;

    for (ll i = 0; i < n; i++) {
        if ( b[i] == '1' ){
            if ( i == 0 ) {
                if (a[i] == '0') {
                    qt++;
                    a[i] = '2';
                }
                else if ( i < n-1 && a[i+1] == '1' ){
                    qt++;
                    a[i+1] = '2';
                }
            }
            else {
                if ( a[i-1] == '1' ) {
                    qt++;
                    a[i-1] = '2';
                }
                else if ( a[i] == '0' ) {
                    qt++;
                    a[i] = '2';
                }
                else if ( i < n-1 && a[i+1] == '1' ){
                    qt++;
                    a[i+1] = '2';
                }
            }
        } 
    }
    cout << qt << el;

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}