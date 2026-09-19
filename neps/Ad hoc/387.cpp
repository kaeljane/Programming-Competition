#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    
*/

void solve() {
    ll f, r, x, dias = 0; cin>>f>>r;
    vector<ll> v(r);
    for (ll i = 0; i < r; i++) {
        cin>>v[i]; 
    }
    
    // casos de borda / edge cases / corner cases
    dias = max(dias, v[0] - 1);
    dias = max(dias, f - v[r-1]);

    for (ll i = 1; i < r; i++) {
        ll posVagas = v[i] - v[i - 1] - 1;

        dias = max(dias, (posVagas + 2 - 1) / 2);

    }

    cout << dias << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
