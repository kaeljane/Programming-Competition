#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 04/10/2025 by Kaeljane in Maratona Superior POP
using namespace std;

int main() {
    ___
    int n; cin >> n;
    
    while(n--){
        bool resposta = false;
        map<char, ll> mapa;
        string nome; cin >> nome;
        string aux = nome;
        ll nao_valido = 0;

        reverse(aux.begin(),aux.end());

        if (aux == nome) resposta = true;
        else {
            for(ll i = 0; i < nome.size(); i++) {
                mapa[nome[i]] += 1;
            }
            for ( auto l:mapa) {
                if (l.second % 2 == 0);
                else if (l.second % 2 != 0) {
                    nao_valido +=1;
                }
            }
        }

        if (nao_valido == 1 || nao_valido == 0) resposta = true;
        if (resposta) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}