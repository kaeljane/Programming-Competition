#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    
    vector<vector<ll>> mat(3, vector<ll>(3, 0));

    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            cin>>mat[i][j];
        }
    }

    ll somaLinha = 0;
    ll somaColuna = 0;

    set<ll> cj;
    for (ll i = 0; i < 3; i++) {
        somaLinha = 0;
        somaColuna = 0;
        for (ll j = 0; j < 3; j++) {
            somaLinha += mat[i][j];
            somaColuna += mat[j][i];
        }
        cj.insert(somaLinha);
        cj.insert(somaColuna);
    }


    ll somaP = 0;
    ll somaS = 0;

    for (ll i = 0; i < 3; i++) {
        somaP += mat[i][i];
        somaS += mat[i][3 - 1 - i];
    }
    cj.insert(somaP); cj.insert(somaS);

    if ( cj.size() > 1 ) {
        cout << "NAO" << '\n';
    }
    else {
        cout << "SIM" << '\n';
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