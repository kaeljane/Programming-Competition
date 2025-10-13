#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 05/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll n, numero; cin>>n;
    vll matriz(n, vl(n));
    bool valido = false;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n ; j++) {
            cin>>numero;
            matriz[i][j] = numero;
        }
    }

    for (ll i = 0; i < n-1; i++) {
        for (ll j = 0; j < n-1 ; j++) {
            if (matriz[i][j] == 1 && matriz[i][j+1] == 1 && matriz[i+1][j] == 1 && matriz[i+1][j+1] == 1) {
                valido = true;
            }
        }
        if (valido) break;
    }
    if (valido) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}