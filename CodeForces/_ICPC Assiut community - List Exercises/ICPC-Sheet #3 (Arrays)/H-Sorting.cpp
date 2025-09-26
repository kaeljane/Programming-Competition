#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
    ll n, numero; cin>>n;
    vector<int> lista = {};
    for (ll i = 0; i < n; i++){
        cin>>numero;
        lista.push_back(numero);

    }

    sort(lista.begin(), lista.end());

    for(auto& num : lista) {
        cout<<num<<' ';
    }
}