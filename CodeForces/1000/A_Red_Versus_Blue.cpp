#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 28/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, b, r;
string s, a, c;

/* (mind )
    
*/

void solve(){
    cin>>n>>r>>b;

    ll base = r / (b+1); 
    ll resto = r % (b+1);  

    for (ll i = 0; i < b+1; i++) { 
        ll qtdR = base + (resto > 0 ? 1 : 0);

        for (ll j = 0; j < qtdR; j++) {
            cout << 'R';
        }

        if (resto > 0) resto--;

        if (i < b) {
            cout << 'B';
        }
    }
    cout << el;

    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}