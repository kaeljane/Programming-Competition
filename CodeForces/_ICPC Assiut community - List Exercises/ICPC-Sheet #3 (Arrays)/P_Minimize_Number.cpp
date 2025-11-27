#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 25/09/2025 by Kaeljane
using namespace std;
 
int main() {
    ___;
    ll n, numero, qt = 0; cin>>n;
    vl lista;
    bool continuee = true;
    for (ll i = 0 ; i < n; i++) {
        cin>>numero;
        lista.push_back(numero);
    }
    // copy(lista.begin(), lista.end(), ostream_iterator<ll> (cout, " ")); cout<<'\n';
 
    while (continuee) {
        for (ll i = 0 ; i < n; i++) {
            if (lista[i] == 0) {
                continuee = false;
                break;
            }
            if (lista[i] % 2 == 0) {
                if (i == n-1) {
                    qt++;
                }
                lista[i] = lista[i] / 2;
                
            }
            else {
                continuee = false;
                break;
                
            }
        }
    }
    cout<<qt;
 
    return 0;
}