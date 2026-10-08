#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    para cada perguntqa imprimir uma linha
    contendo um valor inteiro:
    a soma total de cristais presentes 
    na area delimitada pelo retangulo

    (1,1) até (l, c)

*/

void solve() {
    ll n, q; cin>>n;

    vector<vector<ll>> mat(n+1, vector<ll>(n+1, 0));
    for (ll i = 1; i < n+1; i++) {
        for (ll j = 1; j < n+1; j++) {
            cin>>mat[i][j];
        }
    }

    vector<vector<ll>> pref(n+1, vector<ll>(n+1, 0));
    
    for (ll i = 1; i < n+1; i++) {
        for (ll j = 1; j < n+1; j++) {
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + mat[i][j];
        }
    }

    cin>>q;

    for (ll i = 0; i < q; i++) {
        ll l1 = 1, c1 = 1, l2, c2;
        cin>>l2>>c2;

        ll soma = pref[l2][c2];
        soma -= pref[l1 - 1][c2];
        soma -= pref[l2][c1 - 1];
        soma += pref[l1 - 1][c1 - 1];

        cout << soma << '\n';


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