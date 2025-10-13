#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 03/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    string numero; cin>>numero;
    string aux, aux_2 = "";
    ll tam_sub = numero.size()-2;
    ll soma_aux = 0;
    ll soma = INT_MIN;
    
    for (ll i = 0 ; i < numero.size() - tam_sub+1; i++){
        aux = numero.substr(i, tam_sub);
        soma_aux += stoll(aux);

        for (ll j = 0; j < numero.size(); j++){
            if (j<i || j>=i+tam_sub){
                soma_aux += numero[j] - '0';
                aux_2 = "";
            }
        }
        if (soma_aux >= soma) {
            soma = soma_aux;
        }
        aux = "";
        soma_aux = 0;
    }
    cout << soma << '\n';

    return 0;
}