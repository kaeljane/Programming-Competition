#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/* (mind)
    numero de figurinhas que falta para completar o album

*/

void solve() {
    ll n, m, x; cin>>n>>m;
    vector<ll> v(n + 1, 0); // array de acumulados!!
    for (ll i = 0; i < m; i++) {
        cin>>x;
        v[x]++;
    }
    ll qtFalta = 0;
    for (ll i = 1; i <= n; i++) {
        if (v[i] == 0) {
            qtFalta++;
        }
    }

    cout << qtFalta << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
