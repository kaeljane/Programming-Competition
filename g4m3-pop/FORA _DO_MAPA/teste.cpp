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
int busca_binaria(){
    vl lista = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9};
    ll n = lista.size();
    ll valor_procurado; cin>>valor_procurado;

    // iterador, indice
    auto it = lower_bound(lista.begin(), lista.end(), valor_procurado);
    auto k = it - lista.begin();

    if (k < n && lista[k] == valor_procurado) {
        cout << valor_procurado << " encontrado no indice " << k << '\n';
    }
    else cout << valor_procurado << " não encontrado " << '\n';

    // --------------------------------------------------------------------
    // qt de elementos que possui aquele valor na lista
    auto a = lower_bound(lista.begin(), lista.end(), valor_procurado);
    auto b = upper_bound(lista.begin(), lista.end(), valor_procurado);
    
    cout << b-a << '\n';

    // --------------------------------------------------------------------
    // qt de elementos que possui aquele valor na lista
    auto r = equal_range(lista.begin(), lista.end(), valor_procurado);
    cout << r.second-r.first << '\n';
}

int main() {
    ___

    
    
}


