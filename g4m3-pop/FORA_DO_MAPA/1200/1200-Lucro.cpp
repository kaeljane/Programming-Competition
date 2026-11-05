#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, numero, lucro = 0;
    vector<int> lista;
    cin>>n;

    int menor;

    for (ll i = 0; i < n ; i++) {
        cin>>numero;
        lista.push_back(numero);
    }

    int a = 0, b = 1;
    while (true){
        if (lista[a] <= lista[b]) {
            if ((a == 0 && b == 1) && (lista[b]-lista[a] > 0)) {
                lucro = lista[b] - lista[a];
            }
            if ( lucro < (lista[b] - lista[a]) ) {
                lucro = lista[b] - lista[a];
            }
        }
        if (a == lista.size()-2 && b == lista.size()-1){
            break;
        }
        if (b == (lista.size()-1)) {
            a++;
            b = a+1;
        }
        else {
            b++;
        } 
    }
    cout<<lucro<<'\n';
    // by Kaeljane
    return 0;
}