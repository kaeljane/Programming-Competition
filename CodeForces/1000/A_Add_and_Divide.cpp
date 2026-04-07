#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 06/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    49m 18s
    
*/

void solve(){
    cin>>x>>y;

    ll ans = INF;
    
    for (ll i = 0; i <= 30; i++) {
        ll oper = 0;
        ll num1 = x;
        ll num2 = y;
        for (ll j = 0; j < i; j++) {
            num2++;
            oper++;
        }

        if (y == 1 && i == 0) {
            num2++;
            oper++;
        }

        while (num1 != 0) {
            if (num1 == 0) {
                break;
            }
            num1 = num1/num2;
            oper++;
        }

        ans = min(ans, oper);

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