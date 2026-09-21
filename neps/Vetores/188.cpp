#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/* (mind)
    Os numeros que ocorreram a qt maxima de vezes 
    em ordem crescente.

    n -> qt de lançamento de dados

    array de acc


*/

void solve() {
    ll n, x; cin>>n;
    vector<ll> v(13);

    for (ll i = 0; i < n; i++) {
        cin>>x;
        v[x]++;
    }

    ll maximo = *max_element(all(v));
    
    for (ll i = 1; i < 13; i++) {
        if (v[i] == maximo) {
            cout << i << " ";
        }
    }
    cout << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
