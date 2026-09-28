#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n; cin>>n;

    vector<vector<ll>> mat(n, vector<ll>(n));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }

    for (ll i = 1; i < n; i++) {
        for (ll j = 1; j < n; j++) {
            ll qtPreto = 0;
            ll qtBranco = 0;

            if (mat[i][j-1] == 0) qtBranco++;
            else qtPreto++;
            
            if (mat[i-1][j-1] == 0) qtBranco++;
            else qtPreto++;
            
            if (mat[i-1][j] == 0) qtBranco++;
            else qtPreto++;

            if (qtBranco > qtPreto) mat[i][j] = 1;
            else mat[i][j] = 0;
        }
    }


    cout << mat[n-1][n-1] << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
