#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {
    ll m, n, qtTerra = 0; cin>>m>>n;

    vector<string> mat(m);

    for (ll i = 0; i < m; i++) {
        cin>>mat[i];
    }

    // direções
    vector<ll> dL = {-1, 1, 0, 0};
    vector<ll> dC = {0, 0, -1, 1};
    
    ll qtRetirar = 0;
    
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            if (mat[i][j] == '#') {
                qtTerra++;
                ll qt = 0;
                for (ll k = 0; k < 4; k++) {
                    ll linha = i + dL[k];
                    ll coluna = j + dC[k];
                    if (linha >= 0 && linha < m && 
                        coluna >= 0 && coluna < n
                    ) {
                        if (mat[linha][coluna] == '#') {
                            qt++;
                        }
                    }
                }

                if (qt == 4) {
                    qtRetirar++;
                }
            }
        }
    }

    cout << qtTerra - qtRetirar << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
