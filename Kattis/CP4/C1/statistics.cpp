#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n;
    ll cases = 1;
    while(cin>>n) {
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin>>v[i];
        }
        
        cout << "Case " << cases << ": " << *min_element(all(v)) << " "
        << *max_element(all(v)) << " " << *max_element(all(v)) - *min_element(all(v)) << '\n';
        cases++;
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