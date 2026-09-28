#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n; cin>>n;

    vector<vector<ll>> mat1(n, vector<ll>(n));
    vector<vector<ll>> mat2(n, vector<ll>(n));
    
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>mat1[i][j];
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>mat2[i][j];
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cout << mat1[i][j] + mat2[i][j] << " ";
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
