#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n, m; cin>>n>>m;
    vector<vector<ll>> mat(n, vector<ll>(m));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin>>mat[i][j];
        }
    }

    for (ll i = 0; i < n; i++) {
        bool diffZero = 0;
            ll colunaDiffZero = -1;
            for (ll k = 0; k < m; k++) {
                if (mat[i][k] != 0) {
                    diffZero = 1;
                    colunaDiffZero = k;
                    break;
                }
            }

            
            if (!diffZero) {
                for (ll l = i+1; l < n; l++) {
                    for (ll c = 0; c < m; c++) {
                        if (mat[l][c] != 0) {
                            cout << "N" << '\n';
                            return;
                        }
                    }
                }

                cout << "S" << '\n';
                return;
            }

            bool colunaAnt = 0, colunaAtual = 0;
            for (ll k = i; k < n; k++) {
                if (colunaDiffZero-1 >= 0) {
                    if (mat[k][colunaDiffZero-1] != 0) {
                        cout << "N" << '\n';
                        return;
                    }
                }
            }

            for (ll k = i+1; k < n; k++) {
                if (colunaDiffZero >= 0) {
                    if (mat[k][colunaDiffZero] != 0) {
                        cout << "N" << '\n';
                        return;
                    }
                }
            }

    }

    cout << "S" << '\n';

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

  
    return 0;
}
