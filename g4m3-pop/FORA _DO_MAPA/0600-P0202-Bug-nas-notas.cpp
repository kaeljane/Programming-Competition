#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 29/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    // 10 alunos.
    vl lista_1;
    vl lista_2;
    vl lista_3;
    ll numero;
    ll soma;

    for(ll i = 0; i < 30; i++) {
        cin>>numero;
        if (0 <= i && i <= 9) {
            lista_1.push_back(numero);
        }
        else if (10 <= i && i <= 19) {
            lista_2.push_back(numero);
        }
        else if (20 <= i && i <= 29) {
            lista_3.push_back(numero);
        }
    }

    for (ll k = 0; k < 10; k++) {
        soma = lista_1[k] + lista_2[k] + lista_3[k];
        cout<<soma<<'\n';
    }

    return 0;
}