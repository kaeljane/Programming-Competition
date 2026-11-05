#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 13/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    // vl lista = {2, 5, 8, 10, 12, 12, 12, 12, 9, 6, 1};
    vl lista = {2, 5, 8, 10, 10, 10, 10, 10, 10, 9, 6, 1};
    ll n = lista.size();

    // guarda a posicao mais avançada que sabemos estar na 'subida'.
    ll x = -1;

    ll b = 0;
    // calcula a maior potência de 2 que é menor ou equal a n.
    if (n > 0) b = 1 << static_cast<int>(floor(log2(n)));

    // loop de saltos binarios
    for(; b >= 1; b/=2) {
        while (x + b + 1 < n && lista[x + b] < lista[x + b + 1]) {
            // se for saltamos
            x += b;
        }
    }

    // resultado
    ll k = x + 1;
    cout << "O algoritmo encontrou o pico no indice: " << k << '\n';
    cout << "O valor maximo e: " << lista[k] << '\n';

    return 0;
}