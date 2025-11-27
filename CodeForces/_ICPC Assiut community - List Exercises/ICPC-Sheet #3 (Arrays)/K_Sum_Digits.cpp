#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin>>n;
    string numero; cin>>numero;
    ll soma_digitos = 0;
 
    vector<int> lista;
 
    for (auto& num : numero) {
        lista.push_back(num-'0');
    }
 
    soma_digitos = accumulate(lista.begin(), lista.end(), 0LL);
    cout<< soma_digitos << '\n';
 
 
    
    return 0;
}