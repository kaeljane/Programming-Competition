#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 26/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, X = 0, O = 0;
string s, a, b, c;

/* (mind )
    treinando backtrack
    difícil

    1h 31min 51sec

*/

void backtrack(vector<string> &mat) {
    // condicao de parada
    if (mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X') {
        X++;
        return;
    }
    else if (mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X') {
        X++;
        return;
    }
    else if (mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X') {
        X++;
        return;
    }
    else if (mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X') {
        X++;
        return;
    }
    else if (mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X') {
        X++;
        return;
    }
    else if (mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X') {
        X++;
        return;
    }
    else if (mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X') {
        X++;
        return;
    }
    else if (mat[0][2] == 'X' && mat[1][1] == 'X' && mat[2][0] == 'X') {
        X++;
        return;
    }

    if (mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O') {
        O++;
        return;
    }
    else if (mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O') {
        O++;
        return;
    }
    else if (mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O') {
        O++;
        return;
    }
    else if (mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O') {
        O++;
        return;
    }
    else if (mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O') {
        O++;
        return;
    }
    else if (mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O') {
        O++;
        return;
    }
    else if (mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O') {
        O++;
        return;
    }
    else if (mat[0][2] == 'O' && mat[1][1] == 'O' && mat[2][0] == 'O') {
        O++;
        return;
    }

    char vez;
    ll qtX = 0, qtO = 0;
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            if (mat[i][j] == 'X') qtX++;
            else if (mat[i][j] == 'O') qtO++;
        }
    }
    if (qtX > qtO) vez = 'O';
    else vez = 'X';
    
    // escolhas
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            if (mat[i][j] == '.') {
                
                mat[i][j] = vez;  // Faz a escolha
                
                backtrack(mat);   // Explora as consequencia
                
                mat[i][j] = '.';  // Desfaz a escolha (backtrack!)
            }
        }
    }
}

void solve(){
    vector<string> mat(3, "0");

    for (ll i = 0; i < 3; i++) {
        cin>>s;
        mat[i] = s;
    }

    backtrack(mat);

    cout << X << " " << O << el;
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}