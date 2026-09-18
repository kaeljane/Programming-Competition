#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    [numero de ingresso do ganhador]
    te

    numero de participantes da festa

    doação de um computador

    o numero de ingresso serve para o sorteio do computador
    
    sorteio computadorizado

    ingressos na ordem de chegada

    teofilho preparou o sorteio

    havia apenas um caso, em toda a lista, em que o participante
    que possuia o ingresso numero com i, havia sido a i-ésima
    pessoa a entrar no ginásio.

    
*/

void solve() {
    ll n, x, atual = 1;
    
    while (cin>>n) {
        if (n == 0) break;

        cout << "Teste " << atual << '\n';

        for (ll i = 1; i <= n; i++) {
            cin>>x;

            if (i == x) {
                cout << i << '\n';
            }

        }
        
        cout << '\n';
        atual++;
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
