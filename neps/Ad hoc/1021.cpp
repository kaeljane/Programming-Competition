#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
Saída: 
    o identificador da melhor moldura de acordo
    com os críterios     

    imprimir a primeira e para a lógica

    imprimir -1 caso nenhuma consiga satisfazer 
    os críterios

    A L (altura e largura da fotográfia)



    
*/

void solve() {
    ll a, l, n, x, y;

    cin>>a>>l>>n;

    ll menorFot = min(a, l);
    ll maiorFot = max(a, l);

    bool resposta = 0;
    ll area = INT_MAX;
    ll ans = 0;
    
    for (ll i = 0; i < n; i++) {
        cin>>x>>y;
        ll menor = min(x, y);
        ll maior = max(x, y);

        if (area > (menor * maior) && 
            menor >= menorFot && 
            maior >= maiorFot
        ) {
            area = menor * maior;
            ans = i + 1;
            resposta = 1;
        }
    }

    if (!resposta) cout << -1 << '\n'; 
    else cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
