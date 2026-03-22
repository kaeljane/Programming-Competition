#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
// Seletiva POP
// Bora se divertir

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    

*/

void solve(){
    cin>>n;
    vl v1(n);  for (ll i = 0; i < n; i++) cin>>v1[i];
    vl v2(n);  for (ll i = 0; i < n; i++) cin>>v2[i];

    vector<long long> pre1(n+1, 0);
    vector<long long> pre2(n+1, 0);

    for (ll i = 1; i <= n; i++) {
        pre1[i] = pre1[i-1] + v1[i-1];
    }

    for (ll i = 1; i <= n; i++) {
        pre2[i] = pre2[i-1] + v2[i-1];
    }

    ll idxPulo = 1000000;
    for (ll i = 0; i <= n; i++) {
        if (pre2[n] - pre2[i] > pre1[n] - pre1[i]) {
            // vamos para baixo
            idxPulo = i-1;
            break;
        }
    }
    ll ans = 0;

    for (ll i = 0; i < n; i++) {

        ans = max(ans, pre2[n] - pre2[i] + pre1[i+1]);
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