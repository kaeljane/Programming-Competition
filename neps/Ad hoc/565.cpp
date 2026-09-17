#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {
    ll n, k, f, ans = 0; cin>>n>>k>>f;
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++) cin>>v[i];

    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++) {
            ll soma = v[i] + v[j];
            if (soma >= k && soma <= f ) {
                ans++;
            }
        }
    }

    cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
