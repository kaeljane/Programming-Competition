#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    qt maxima de numeros da sequencia que poderiam ser marcados
    com um circulo sem que haja dois numeros iguais consecutivos
*/

void solve() {
    ll n, x, ant, ans = 0;

    cin>>n;
    cin>>ant;
    for (ll i = 1; i < n; i++) {
        cin>>x;
        if (x != ant) ans++;
        ant = x;
    }
    cout << ans + 1 << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
