#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    ll n; cin>>n;
    vector<ll> v(n+2, 0);
    for (ll i = 1; i <= n; i++) {
        cin>>v[i];
    }
    for (ll i = 1; i <= n; i++) {
        cout << v[i-1] + v[i] + v[i+1] << '\n';
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
