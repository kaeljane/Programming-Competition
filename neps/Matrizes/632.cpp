#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*


*/

ll m, n, cont = 1;

void solve() {
    vector<vector<ll>> mat(m, vector<ll>(n, 0));

    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }
    ll x, y;
    ll totalX = 0, totalY = 0;
    
    while(cin>>x>>y) {
        if (x == 0 && y == 0) break;
        totalX += x; totalY += y;
    }

    cout << "Teste " << cont << '\n';
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            ll nL = ((i + totalY) % m + m) % m;
            ll nC = ((j - totalX) % n + n) % n;

            cout << mat[nL][nC] << " ";
        }
        cout << '\n';
    }

    cout << '\n';
    cont++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    while (cin>>m>>n){   
        if (m == 0 && n == 0) break;
        solve();
    }

  
    return 0;
}