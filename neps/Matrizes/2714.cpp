#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n, q; cin>>n>>q;
    vector<vector<char>> mat(n+2, vector<char>(n+2));

    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            cin>>mat[i][j];
        }
    }
    
    vector<ll> dL = {-1, -1, -1, 0, 1, 1, 1, 0}; // linha
    vector<ll> dC = {-1, 0, 1, 1, 1, 0, -1, -1}; // coluna
    for (ll p = 0; p < q; p++) {
        vector<vector<char>> matAux = mat;
        
        for (ll i = 1; i <= n; i++) {
            for (ll j = 1; j <= n; j++) {
                
                ll qtMorta = 0, qtViva = 0;

                for (ll k = 0; k < 8; k++) {
                    ll novaLinha = i + dL[k];
                    ll novaColuna = j + dC[k];

                    if (novaLinha >= 1 && novaLinha <= n
                        && novaColuna >= 1 && novaColuna <= n) {
                        if (mat[novaLinha][novaColuna] == '1') {
                            qtViva++;
                        }
                    } 

                }

                if (mat[i][j] == '0') {
                    if (qtViva == 3) {
                        matAux[i][j] = '1';
                    }
                }
                else {
                    if (qtViva == 2 || qtViva == 3 ) {
                        matAux[i][j] = '1';
                    }
                    else {
                        matAux[i][j] = '0';
                    }
                }

            }
        }
        mat = matAux;

    }

    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            cout << mat[i][j];
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
