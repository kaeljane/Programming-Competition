#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 02/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll t; cin>>t;
    string valor;
    
    while (t--) {
        cin>>valor;
        string valor_1, valor_2;
        string aux1, aux2;

        valor_1.push_back(valor[0]);
        valor_1.push_back(valor[1]);

        valor_2.push_back(valor[1]);
        valor_2.push_back(valor[2]);

        aux1.push_back(valor[2]);
        aux2.push_back(valor[0]);

        aux1 = valor[2];
        ll calculo_1 = (stoll(valor_1) + stoll(aux1));
        ll calculo_2 = (stoll(valor_2) + stoll(aux2));
        
        if (calculo_1 > calculo_2){
            cout << calculo_1 << '\n';
        }
        else {
            cout << calculo_2 << '\n';
        }
        
    }

    return 0;
}