#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 05/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, k, q;
string s, a, b, c;

/* (mind )
    1h e 34min 13sec

    contar todos os subarrays válidos dentro de um bloco maior

*/

void solve(){
    cin>>n>>k>>q;
    vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];
    
    ll ans = 0; 
    ll l = 0; 

    for (ll i = 0; i < n; i++) {
        if ( v[i] <= q ) {
            l++;
        }
        else {
            if ( v[i] > q && l >= k ) {
                ll x = l - k + 1;
                ans += x*(x + 1)/2;
            }
            l = 0;
        }

    }
    if ( l >= k ) {
        ll x = l - k + 1;
        ans += x*(x + 1)/2;
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