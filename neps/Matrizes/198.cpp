#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    2 7 6
    9 5 1
    4 3 8

*/

void solve() {
    set<ll> cj;

    vector<vector<ll>> mat(3, vector<ll>(3));

    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            cin>>mat[i][j];
        }
    }
    ll soma = 0;
    for (ll i = 0; i < 3; i++) {
        soma += mat[i][i];
    }
    
    cj.insert(soma); soma = 0;

    ll j = 2;
    for (ll i = 0; i < 3; i++) {
        soma += mat[i][j]; j--;
    }

    cj.insert(soma); 

    for (ll i = 0; i < 3; i++) {
        soma = 0;
        for (ll j = 0; j < 3; j++) {
            soma += mat[i][j];
        }
        cj.insert(soma);
    }

    if (cj.size() == 1) {
        cout << "SIM" << '\n';
    }
    else {
        cout << "NAO" << '\n';
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
