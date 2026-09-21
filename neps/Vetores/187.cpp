#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    ll x;
    vector<ll> v;

    for (ll i = 0; i < 10; i++) {
        cin>>x;
        v.push_back(x);
    }

    reverse(all(v));

    for (ll i = 0; i < 10; i++) {
        cout << v[i] << '\n';
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
