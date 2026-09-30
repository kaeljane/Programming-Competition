#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll r, c, x; cin>>r>>c;
    
    for (ll i = 0; i < r; i++) {
        ll somaLinha = 0;
        for (ll j = 0; j < c; j++) {
            cin>>x;
            somaLinha += x;
        }
        cout << somaLinha << '\n';
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
