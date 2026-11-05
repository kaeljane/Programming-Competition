#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 25/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    delay(b) - delay(a) <= 2
    imperador vive na cidade 1
    
    que questao confusa

    1h 1min 19sec

*/

void solve(){
    vl v(n);  
    for (ll i = 0; i < n; i++) cin>>v[i];
    
    ll ans = 0;

    sort(v.begin() + 1, v.end());

    for (ll i = 1; i < n; i++) {
        if (0 <= v[0] - v[i] && v[0] - v[i] <= 2) ans++;
        else {
            ll valor = v[i]; 
            for (ll j = i+1; j < n; j++) {
                if (v[j] <= v[0]) {
                    if (0 <= v[j] - valor && v[j] - valor <= 2) {
                        valor = v[j];
                        if (0 <= v[0] - valor && v[0] - valor <= 2) {
                            ans++;
                            break;
                        }
                    }
                    else {
                        break;
                    }
                }
            }        
        } 
    }

    cout << ans << el;
    
}
signed main() {
    ___
    cin>>t>>n;
    while(t--) 
    solve();

    return 0;
}