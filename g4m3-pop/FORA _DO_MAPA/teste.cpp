#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 06/10/2025 by Kaeljane
using namespace std;

int kadane(){
    ___
    // Algoritmo de Kadane
    vl teste = {-1, 2, 4, -3, 5, 2, -5,2};

    ll best = 0, sum = 0;
    for( ll k = 0; k < teste.size(); k++) {
        sum = max(teste[k], sum+teste[k]);
        best = max(best, sum);
    }
    cout << best << '\n';

    return 0;
}

int main() {
    ___
    // Se x não existe, o ponteiro aponta para o primeiro elemento que é maior que x.
    // Se x for maior que todos os elementos, o ponteiro aponta para array + n (uma posição depois do fim).
    vl lista = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ll n = lista.size();

    // auto k = lower_bound(lista, lista+n, 5) - lista;
    auto k = lower_bound(lista,lista+n,5)-lista;
    if (k < n && lista[k] == 5) {
         
    }

}


