#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    C
*/

void solve() {
    ll n, m; cin>>n>>m;

    ll ans = 0;

    for (ll r = 1; r <= m; r++) {
        ll s = n - r;

        ll min_g = max(1LL, s - m);
        ll max_g = min(m, s - 1);

        if (min_g <= max_g) {
            ans += (max_g - min_g + 1);
        }
    }
    cout << ans << '\n';

    // lógica
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
