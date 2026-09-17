#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {
    ll x;
    map<ll, ll> m;
    for (ll i = 0; i < 8; i++) {
        cin>>x;
        m[x]++;
    }

    for (auto &x : m) {
        if (x.second >= 5) {
            cout << "N" << '\n';
            return;
        }
    }

    cout << "S" << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
