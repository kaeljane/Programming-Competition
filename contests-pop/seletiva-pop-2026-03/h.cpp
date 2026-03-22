#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
// Seletiva POP
// Bora se divertir

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, m;
string s, a, b, c;

/* (mind )
    

*/

void solve(){
    cin>>n>>m;
    // vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];
    
    vector<vector<long long>> mat(n, vl(m, 0));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            // cout << mat[i][j] << " ";
            cin>>mat[i][j];
        }
    }

    for (ll i = 0; i < n; i++) { // linha
        for (ll j = 0; j < m; j++) { // coluna
            if (mat[i][j] == 0) {

                // parede 1 + teto
                if (j == 0 && i == 0 ) {
                    cout << (ll)max(mat[i+1][j], mat[i][j+1]) << el;
                    return;
                }
                // parede 1 + chao
                else if (i == n-1 && j == 0) {
                    cout << (ll)max(mat[i-1][j], mat[i][j+1]) << el;
                    return;
                }
                // teto + parede 2
                else if (i == 0 && j == m-1) {
                    cout << (ll)max(mat[i][j-1], mat[i+1][j]) << el;
                    return;
                }
                // chao + parede2
                else if (i == n-1 && j == m-1) {
                    cout << max(mat[i-1][j], mat[i][j-1]) << el;
                    return;
                }
                // parede 1
                else if (j == 0) {
                    ll ans = max(mat[i-1][j], mat[i+1][j]);
                    ans = max(ans,mat[i][j+1]);
                    cout << ans << el;
                    return;
                }
                // teto
                else if (i == 0) {
                    ll ans = max(mat[i][j+1], mat[i][j-1]);
                    ans = max(ans, mat[i+1][j]);
                    cout << ans << el;
                    return;
                }
                // chao
                else if (i == n-1) {
                    ll ans = max(mat[i][j+1], mat[i-1][j]);
                    ans = max(ans, mat[i][j-1]);
                    cout << ans << el;
                    return;
                }
                // parede 2
                else if (j == m-1) {
                    ll ans = max(mat[i+1][j], mat[i-1][j]);
                    ans = max(ans, mat[i][j-1]);
                    cout << ans << el;
                    return;
                }
                else { // pode tudo
                    ll ans = max(mat[i-1][j], mat[i][j-1]);
                    ans = max(ans, mat[i][j+1]);
                    ans = max(ans, mat[i+1][j]); 
                    
                    cout << ans << el;
                    return;
                }
            }
        }
    }



}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}