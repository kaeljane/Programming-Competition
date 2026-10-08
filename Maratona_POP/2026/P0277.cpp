#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*


*/


void solve() {
    vector<vector<char>> mat(3, vector<char>(3, 0));
    vector<vector<bool>> vis(3, vector<bool>(3, 0));
    
    pair<ll, ll> posK; 
    ll qtX = 0;
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            cin>>mat[i][j];
            if (mat[i][j] == 'X') {vis[i][j] = 1; qtX++;}
            if (mat[i][j] == 'K') posK = {i, j};
        }
    }


    vector<ll> dL = {-1, 1, 0, 0};
    vector<ll> dC = {0, 0, -1, 1};

    function<void(ll, ll)> dfs_grid = [&](ll linha, ll coluna) {
        vis[linha][coluna] = 1;

        for (ll k = 0; k < 4; k++) {
            ll nL = linha + dL[k];
            ll nC = coluna + dC[k];

            if (nL >= 0 && nL < 3 && nC >= 0 && nC < 3) {
                if (!vis[nL][nC]) {
                    dfs_grid(nL, nC);
                }
            }

        }

    };


    dfs_grid(posK.first, posK.second);

    ll qtVis = 0;
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            if (vis[i][j]) qtVis++;
        }
    }

    cout << qtVis - qtX << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

  
    return 0;
}