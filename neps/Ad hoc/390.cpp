#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
Saída: 
    quantidade máxima de comida que pacman pode 
    levar pra casa.

    
*/

void solve() {
    ll n; cin>>n;
    string s;
    vector<string> v(n);
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }
    bool esq_dir = 1;
    
    ll levarPraCasaAtual = 0;
    ll maxLevarPraCasa = 0;

    for (ll i = 0; i < n; i++) { // vai ser linha por linha
        if (esq_dir) {
            for (ll j = 0; j < n; j++) {
                if (v[i][j] == 'A') levarPraCasaAtual = 0;
                else if (v[i][j] == 'o') levarPraCasaAtual++;
                maxLevarPraCasa = max(levarPraCasaAtual, maxLevarPraCasa);
            }
            esq_dir = 0;
        }
        else {
            for (ll j = n - 1; j >= 0; j--) {
                if (v[i][j] == 'A') levarPraCasaAtual = 0;
                else if (v[i][j] == 'o') levarPraCasaAtual++;
                maxLevarPraCasa = max(levarPraCasaAtual, maxLevarPraCasa);
            }
            esq_dir = 1;
        }
    }

    cout << maxLevarPraCasa << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
