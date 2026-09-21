#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    ll x; 
    vector<ll> impares;
    vector<ll> pares;

    for (ll i = 0; i < 10; i++) {
        cin>>x;
        if (x % 2 == 0) {
            pares.push_back(x);
        }
        else {
            impares.push_back(x);
        }
    }

    for (ll i = 0; i < pares.size(); i++) {
        cout << pares[i] << " ";
    }
    cout << '\n';
    for (ll i = 0; i < impares.size(); i++) {
        cout << impares[i] << " ";
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
