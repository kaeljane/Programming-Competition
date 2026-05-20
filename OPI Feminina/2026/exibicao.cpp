#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define el '\n'
using namespace std;

ll n, t, x, y;
string s;

const ll MOD = 1000000000 + 7;

void solve () {
    cin>>n;
    vector<pair<ll, ll>> pares;
    
    for (ll i = 0; i < n; i++) {
        cin>>x>>y;
        pares.push_back({x, y});
    }

    sort(all(pares));
    ll valorAnterior = -1;

    ll ans = 0;

    for (ll i = 0; i < n; i++) {
        if (i < n-1) {
            if (pares[i].second-pares[i].second <= pares[i+1].second - pares[i+1].first) {
                if (pares[i].first >= valorAnterior) {
                    ans++;
                    valorAnterior = pares[i].second;
                }
            } 
        }
        else {
            if (pares[i].first >= valorAnterior) {
                ans++;
            }
        }
    }
    cout << ans << el;
    
}
signed main() {
    solve();
    
}
