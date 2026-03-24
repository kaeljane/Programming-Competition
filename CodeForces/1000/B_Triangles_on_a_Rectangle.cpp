#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 22/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, w, xMaximo, yMaximo, k;
string s, a, b, c;

/* (mind )
    2h+
    vou endoidarrrrr
    colocar biblioteca

*/

void solve(){
    cin>>xMaximo>>yMaximo;

    ll ans = 0;

    for (ll i = 0; i < 2; i++) {
        cin >> k;
        vector<ll> v(k);
        for (ll j = 0; j < k; j++) {
            cin>> v[j];
        }

        ll area = (v.back() - v.front()) * yMaximo;
        ans = max(ans, area);
    }

    for (ll i = 0; i < 2; i++) {
        cin>>k;
        vector<ll> v(k);
        for (ll j = 0; j < k; j++) {
            cin>> v[j];
        }

        ll area = (v.back() - v.front()) * xMaximo;
        ans = max(ans, area);
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