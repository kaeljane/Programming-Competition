#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 02/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, k;
string s, a, b, c;

/* (mind )
    51m 14s

*/

void solve(){
    cin>>n>>k;
    cin>>s;

    vector<ll> prefix(n+1, 0);

    for (ll i = 0; i < n; i++) {
        if (s[i] == 'W') {
            prefix[i+1] += prefix[i] + 1;
        }
        else {
            prefix[i+1] += prefix[i];
        }
    }

    // 0-based
    ll ans = INF;
    ll j = 0;
    for (ll i = k; i <= n; i++) {
        ans = min(ans, prefix[i] - prefix[j]);
        j++;
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