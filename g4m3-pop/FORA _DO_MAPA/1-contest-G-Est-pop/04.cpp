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
// 08/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll n; cin>>n;
    ll numero;
    ll acumulado = 0;
    vl resposta;
    ll x;
    for (ll i = 0; i < n; i++) {
        cin>>numero;
        if (i == 0) {
            x = numero;
            acumulado +=x;
            resposta.push_back(x);
        }
        else {
            x = numero - acumulado;
            acumulado+=x;
            resposta.push_back(x);
        }
    }
    
    for (auto k : resposta) {
        cout << k << " ";
    }
    cout << '\n';

    return 0;
}