#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
#define ld long double
using namespace std;

/*
    imprimir o valor do premio correspondendte  à aposta dada.

    25 grupos

    dois ultimos digitos (dezenas e unidades)

    cada numero recebe o nome de um animal

    burro (1, 2, 3, 4)
    aguia (5, 6, 7, 8)
    ...
    ultimo(97, 98, 99, 00)

    V -> valor da aposta
    N -> numero
    M -> é sorteado todo dia

    M e N tem os mesmo quatro ultimos digitos
    (milhar, centenas, dezenas e unidade)
        V * 30000 
    M e N tem os mesmo tres ultimos digitos
    V * 500
    M e N tem os mesmos dois ultimos ditios
    V * 50



*/

ll qtGruposUnidMilhar(ll n, ll m) {
    string a = to_string(n);
    string b = to_string(m);

    reverse(all(a)); reverse(all(b));

    // Força ambas as strings a terem pelo menos 4 dígitos (0000)
    while (a.size() < 4) {
        a += '0';
    }
    while (b.size() < 4) {
        b += '0';
    }

    ll menor = min(a.size(), b.size());

    ll qt = 0;
    for (ll i = 0; i < a.size(); i++) {
        if (qt == 4) break;
        if (a[i] == b[i]) {
            qt++;
        }
        else {
            break;
        }
    }
    return qt;

}

bool ultimosMesmoGrupo(ll n, ll m) {
    ll finalN = n % 100;
    ll finalM = m % 100;

    // Regra do grupo 25 (finais 97, 98, 99 e 00)
    ll grupoN = (finalN == 0) ? 25 : (finalN - 1) / 4 + 1;
    ll grupoM = (finalM == 0) ? 25 : (finalM - 1) / 4 + 1;

    return grupoN == grupoM;

}

void solve() {
    ld v; ll n, m;
    while (cin>>v>>n>>m){
        if (v == 0 && n == 0 && m == 0) break;
        ll resp = qtGruposUnidMilhar(n, m);
        
        if (resp == 4) {
            v *= 3000;
        }
        else if (resp == 3) {
            v *= 500;
        }
        else if (resp == 2) {
            v *= 50;
        }
        else if (ultimosMesmoGrupo(n, m)) {
            v *= 16;
        }
        
        else {
            v = 0;
        }

        cout << fixed << setprecision(2) << v << '\n';
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