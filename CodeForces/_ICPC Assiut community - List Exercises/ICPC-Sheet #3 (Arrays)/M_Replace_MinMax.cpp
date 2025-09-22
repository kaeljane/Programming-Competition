#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, numero; cin>>n;
    vector<int> array;

    while (n--) {
        cin>>numero;
        array.push_back(numero);
        if (n == 0) break;
    }
    vector<int> array_2 = array;

    int valor_minimo = *min_element(array.begin(), array.end()); // precisa colocar asterisco para pegar o numero o contrario pegara um ponteiro.
    int valor_maximo = *max_element(array.begin(), array.end());

    for (auto& num : array) {
        if (num == valor_minimo) {num = valor_maximo; continue;}
        if (num == valor_maximo) {num = valor_minimo; continue;}
    } 

    for (auto& num : array) {
        cout<<num<<' ';
    }

    return 0;
}