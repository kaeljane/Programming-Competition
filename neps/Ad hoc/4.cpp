#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {
    ll n, m, somaMinima=0; cin>>n>>m;
    vector<ll> v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    
    ll ant = -1e9 + 5;

    for (ll i = 0; i < n; i++) {
        ll menor = min(v[i], m - v[i]);
        ll maior = max(v[i], m - v[i]);

        if (ant <= menor) {
            somaMinima += menor;
            ant = menor;
        }
        else if (ant <= maior) {
            somaMinima += maior;
            ant = maior;
        }
        else {
            cout << -1 << '\n';
            return;
        }
    }
    cout << somaMinima << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
