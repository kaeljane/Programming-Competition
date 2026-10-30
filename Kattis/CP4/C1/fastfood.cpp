#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    k adesivos necessarios para reinvidicar o premio


*/

void solve() {
    ll n, m, k, x, valorPremio; cin>>n>>m;

    // n diferentes tipos de premios
    // m diff tipos de stickers
    vector<pair<ll, vector<ll>>> v(n);

    for (ll i = 0; i < n; i++) {
        cin>>k;
        for (ll j = 0; j < k; j++) {
            cin>>x;
            v[i].second.push_back(x);
        }
        cin>>valorPremio;
        v[i].first = valorPremio;

    }
    vector<ll> qt_adesivos(m + 1, 0);

    for (ll i = 1; i <= m; i++) {
        cin>>qt_adesivos[i];
    }

    ll dinheiroTotal = 0;
    
    for (ll i = 0; i < n; i++) {
        ll max_resgastes = 1e18;

        for (ll adesivo : v[i].second) {
            max_resgastes = min(max_resgastes, qt_adesivos[adesivo]);
        }

        dinheiroTotal += (max_resgastes * v[i].first);
    }

    cout << dinheiroTotal << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}