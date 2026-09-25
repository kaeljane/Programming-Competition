#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {

    vector<vector<ll>> mat(3, vector<ll>(3));

    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            cin>>mat[i][j];
        }
    }
    ll maior = -INT_MAX;
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            maior = max(maior, mat[i][j]);
        }
    }

    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            if (maior == mat[i][j]) {
                cout << -1 << " ";
            }
            else cout << mat[i][j] << " ";
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
