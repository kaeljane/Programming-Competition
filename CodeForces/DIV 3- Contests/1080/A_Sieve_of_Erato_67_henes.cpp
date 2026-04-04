#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 03/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    67 é primo
*/

void solve(){
    cin>>n;
    vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];
    sort(all(v));
    if (v[n-1] == 67) {
        cout << "YES" << el;
    }
    else if (v[n-1] == 67 && v[0] == 1) {
        cout << "YES" << el;
    }
    else {
        cout << "NO" << el;
    }
    
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}