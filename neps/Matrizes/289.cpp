#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n, m, t, a, b; cin>>n>>m;

    vector<vector<ll>> adj(n+1);
    
    for (ll i = 0; i < m; i++) {
        cin>>t>>a>>b;
        if (t == 1) {
            adj[a].push_back(b);
            adj[b].push_back(a);
            
        }
        else {
            bool ans = 0; 

            for (auto &x : adj[a]) { // sera que nao da tempo limite?????
                if (x == b) {
                    ans = 1;
                    break;
                }
            }
            if (ans) cout << 1 << '\n';
            else cout << 0 << '\n'; 
        }
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
