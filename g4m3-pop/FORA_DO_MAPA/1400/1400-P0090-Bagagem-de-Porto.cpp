#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 26/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    35m 4sec

*/

void solve(){
    cin>>n;
    vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];
    vl back = v;
    
    sort(all(back));
    
    ll qt = 0;
    ll j = 0;
    for (ll i = 0; i < n; i++) {
        if (back[j] == v[i]) {
            qt++;
            j++;
        }
    }
    cout << n - qt << el;

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}