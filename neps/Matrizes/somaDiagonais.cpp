#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    
    vector<vector<ll>> mat(3, vector<ll>(3, 0));
    
    // input
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            cin>>mat[i][j];
        }
    }

    ll somaDiagonalPrincipal = 0;
    ll somaDiagonalSecundaria = 0;

    for (ll i = 0; i < 3; i++) {
        somaDiagonalPrincipal += mat[i][i];
        somaDiagonalSecundaria += mat[i][3 - 1 - i];
    }


    cout << "Diagonal principal: " << somaDiagonalPrincipal << '\n';
    cout << "Diagonal secundaria: " << somaDiagonalSecundaria << '\n';




}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}