#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll r, c, x; cin>>r>>c;
    
    vector<vector<ll>> mat(r, vector<ll>(c));
    vector<vector<ll>> t(c, vector<ll>(r));

    for (ll i = 0; i < r; i++) {
        for (ll j = 0; j < c; j++) {
            cin>>mat[i][j];
            t[j][i] = mat[i][j];
        }
    }

    for (ll i = 0; i < c; i++) {
        for (ll j = 0; j < r; j++) {
            cout << t[i][j] << " ";
        }
        cout << '\n';
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
