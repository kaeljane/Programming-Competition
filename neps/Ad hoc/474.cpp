#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
Saída: 
    
    
*/

void solve() {
    ll n, qtPontos = 2; cin>>n;
    
    for (ll i = 0; i < n; i++) {
        qtPontos = qtPontos + (qtPontos - 1);
    }

    cout << qtPontos*qtPontos << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
