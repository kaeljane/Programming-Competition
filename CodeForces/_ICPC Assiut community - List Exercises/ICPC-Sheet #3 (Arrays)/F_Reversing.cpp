#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, numero; cin>>n;

    vector<int> lista = {};
    
    for (ll i = 0; i < n ; i++){
        cin>>numero;
        lista.push_back(numero);
    }
    for(int j = lista.size()-1; j >= 0; j--) {
        cout<<lista[j]<<' ';
    }
    return 0;
}