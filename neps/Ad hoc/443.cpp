#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {
    ll v, n; cin>>v>>n;
    ll total = v * n;
    for (ll i = 10; i <= 90; i+=10) {
        ll x = ceil( 
            ((double)total * i) / 100
        );
        cout << x << " ";
    }
    cout << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
