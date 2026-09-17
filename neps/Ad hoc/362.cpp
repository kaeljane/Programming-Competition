#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    1 ou 2 
        indica qual jogador ganhou a partida
    
    -1 empate

*/

void solve() {
    ll a, d, a2, d2; cin>>a>>d>>a2>>d2;
    
    bool ataq_1 = (d != a2);
    bool ataq_2 = (d2 != a);

    if (!ataq_1 && ataq_2) cout << 1 << '\n';
    else if (ataq_1 && !ataq_2) cout << 2 << '\n';
    else  cout << -1 << '\n';

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
