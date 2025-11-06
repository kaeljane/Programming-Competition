#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<char>
#define vd vector<long double>
#define vll vector<vector<char>>
#define all(v) v.begin(), v.end()
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ""))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 04/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    matriz quadratica
    square

    Só mudar os elementos da extremidade

    
*/
void solve() {
    cin>>n;
    vc v = {};
    vc rotate = {};
    vll matriz(n, vl(n));

    for (ll i=0; i<n; i++) {
        cin>>s;
        for (ll k=0; k < n; k++) {
            v.push_back(s[k]);
        }
    }
    y=0;
    for (ll i=0; i<n; i++) {
        for (ll j=0; j<n; j++) {
            matriz[i][j] = v[y];
            y++;
        }
    }
    for (ll u=0; u < n; u++) rotate.push_back(matriz[0][u]);
    for(ll u=1; u < n; u++) rotate.push_back(matriz[u][n-1]);
    for (ll u=n-2; u >= 0; u--) rotate.push_back(matriz[n-1][u]);
    for (ll u=n-2; u > 0; u--) rotate.push_back(matriz[u][0]);
    y=0;
    for (ll u=1; u < n; u++) {
        matriz[0][u] = rotate[y];
        y++;
    }
    for(ll u=1; u < n; u++) {
        matriz[u][n-1] = rotate[y];
        y++;
    }
    for (ll u=n-2; u >= 0; u--) {
        matriz[n-1][u] = rotate[y];
        y++;
    }
    for (ll u=n-2; u > 0; u--) {
        matriz[u][0] = rotate[y];
        y++;
    }
    matriz[0][0] = rotate.back();
    
    for (ll i=0; i<n; i++) {
        for (ll j=0; j<n; j++) {
            cout << matriz[i][j];
        }
        cout << '\n';
    }
}
signed main() {
    ___
    t=1;
    while(t--)solve();
    
    return 0;
}