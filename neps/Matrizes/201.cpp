#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*


*/

void solve() {
    
    ll diagonalPrincipal = 0, diagonalSecundaria = 0;

    vector<vector<ll>> mat(3, vector<ll>(3));

    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            cin>>mat[i][j];
        }
    }

    for (ll i = 0; i < 3; i++) {
        diagonalPrincipal += mat[i][i];
    }
    ll j = 2;
    for (ll i = 0; i < 3; i++) {
        diagonalSecundaria += mat[i][j];
        j--;
    }

    cout << "Diagonal principal: " << diagonalPrincipal << '\n';
    cout << "Diagonal secundaria: " << diagonalSecundaria << '\n';
    

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
