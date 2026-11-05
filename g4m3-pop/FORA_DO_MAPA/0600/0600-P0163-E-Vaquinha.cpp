#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 28/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    long double money;
    long double meta = 10000, arrecadado = 0, valor_extra = 0;
    ll doacoes = 0;

    while (cin>>money){
        if (arrecadado < meta) {
            arrecadado+=money;
            doacoes++;
        }
        if (arrecadado > meta) {
            valor_extra = arrecadado - meta;
            break;
        }
    }
    cout<<"Total arrecadado: R$ "<<fixed<<setprecision(2)<<arrecadado<<'\n';
    cout<<"Doacoes recebidas: "<<doacoes<<'\n';
    cout<<"Valor extra arrecadado: R$ "<<fixed<<setprecision(2)<<valor_extra<<'\n';

    return 0;
}