#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n; string s;

    while(cin>>n) {
        if (n == 0) break;

        vector<string> nomes;
        for (ll i = 0; i < n; i++) {
            cin>>s;
            nomes.push_back(s);
        }

        vector<int> baralho(52);
        for (int i = 0; i < 52; i++) {
            cin >> baralho[i];
        }

        vector<int> ativos(n);
        iota(all(ativos), 0);

        int topo = 0;
        
        while (ativos.size() > 1) {
            if (topo + ativos.size() > 52) break;

            int menor_carta = 14;
            vector<int> cartas_rodada(ativos.size());

            for (size_t i = 0; i < ativos.size(); i++) {
                cartas_rodada[i] = baralho[topo++];
                menor_carta = min(menor_carta, cartas_rodada[i]);
            }

            vector<int> prox_ativos;
            for (size_t i = 0; i < ativos.size(); i++) {
                if (cartas_rodada[i] != menor_carta) {
                    prox_ativos.push_back(ativos[i]);
                }
            }

            if (prox_ativos.empty()) break;

            ativos = prox_ativos;
        }

        for (size_t i = 0; i < ativos.size(); i++) {
            cout << nomes[ativos[i]] << " ";
        }
        cout << '\n';
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