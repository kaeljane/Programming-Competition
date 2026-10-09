#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n; cin>>n;
    double soma = 0, x, y;
    for (ll i = 0; i < n; i++) {
        cin>>x>>y;
        soma += x*y;
    }

    cout << fixed << setprecision(3) << soma << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}