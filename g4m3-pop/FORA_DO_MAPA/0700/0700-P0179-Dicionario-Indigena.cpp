#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 02/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll t; cin>>t;
    string pal, sig;
    vs palavras;
    vs significados;
    string resposta = "YES";
    while (t--) {
        cin>>pal>>sig;
        palavras.push_back(pal);
        significados.push_back(sig);
    }

    for(ll i = 0; i < palavras.size(); i++) {
        vs palavras_backup = palavras;
        palavras_backup[i] = '0';
        
        auto it = find(palavras_backup.begin(), palavras_backup.end(), palavras[i]);

        if (it != palavras_backup.end()) {
            ll indice = distance(palavras_backup.begin(), it);
            if (significados[i] != significados[indice]) {
                resposta = "NO";
                break;
            }
            else {
                resposta = "YES";
            }
        }

    }
    cout << resposta << '\n';

    return 0;
}