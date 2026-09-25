#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*


*/

void solve() {
    
    ll soma = 0, x;
    vector<vector<ll>> mat(3, vector<ll>(3));

    for (ll i = 0; i < 3; i++) {
        soma = 0;
        for (ll j = 0; j < 3; j++) {
            cin>>x;
            mat[i][j] = x;
        }
    }
    for (ll i = 0; i < 3; i++) {
        soma = 0;
        for (ll j = 0; j < 3; j++) {
            soma += mat[j][i];
        }
        cout << "Coluna " << i << ": " << soma << '\n';
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
