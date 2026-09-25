#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*


*/

void solve() {
    ll n, ans = 0; cin>>n;
    
    vector<vector<ll>> mat(n, vector<ll>(n));
    vector<ll> somaLinha(n);
    vector<ll> somaColuna(n);
    
    for (ll i = 0; i < n; i++) {
        
        for (ll j = 0; j < n; j++) {
            cin>>mat[i][j];
            somaLinha[i] += mat[i][j];
            somaColuna[j] += mat[i][j];
        }
    }

    // testar todas as possibilidades
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            ans = max(ans, somaLinha[i] + somaColuna[j] - 2*(mat[i][j]));
        }


    }

    cout << ans << '\n';

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
