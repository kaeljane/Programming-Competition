#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    dices == dados
    12 e 21 sempre vence
    
    numeros com os dois digitos iguais é empate e o desempate é: vence o maior
    
    se nao for nenhum nesses
    
    
*/

ll calcularPontuacao(ll d1, ll d2) {
    if ((d1 == 1 && d2 == 2) || (d1 == 2 && d2 == 1)) return 1000;
    if (d1 == d2) return d1 * 100;
    return max(d1, d2) * 10 + min(d1, d2);

}

void solve() {
    ll x, y, z, w;
    while (cin>>x>>y>>z>>w) {
        if (x == 0 && y == 0 && z == 0 && w == 0) break;
        ll p1 = calcularPontuacao(x, y);
        ll p2 = calcularPontuacao(z, w);

        if (p1 == p2) cout << "Tie." << '\n';
        else if (p1 > p2) cout << "Player 1 wins." << '\n';
        else {
            cout << "Player 2 wins." << '\n';
        }

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