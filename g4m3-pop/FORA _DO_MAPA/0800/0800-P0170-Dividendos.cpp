#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 27/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    buba - par
    alice - impar

    8min 5sec
*/

void solve(){
    cin>>n;
    cin>>s;
    
    for (ll i = 0; i < s.size(); i++) {
        a += "0";
        b += "0";    
    }

    for (ll i = 0; i < s.size(); i++) {
        if (!(i&1)) {
            a[i] = s[i];
        }
        else {
            b[i] = s[i];
        }
    }

    cout << b << el << a << el;
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}