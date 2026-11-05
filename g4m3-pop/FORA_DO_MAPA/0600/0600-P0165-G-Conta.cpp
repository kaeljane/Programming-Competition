#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 29/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    long double valor, saldo_atual=0;
    ll erros=0;
    vector<long double> valores_validos;
    while(cin>>valor) {
        if (valor>0) {
            saldo_atual+=valor;
            valores_validos.push_back(valor);
        }
        else {
            if (saldo_atual + valor > 0) {
                saldo_atual+=valor;
                valores_validos.push_back(valor);
            }
            else erros++;
        }
    }
    valores_validos.erase(valores_validos.begin() + 0);
    sort(valores_validos.begin(), valores_validos.end());

    if (valores_validos.size() > 0) {
        if (valores_validos[0] < 0)
            cout<<"Maior saque: "<<fixed<<setprecision(2)<<abs(valores_validos[0])<<'\n';
        else {
            cout<<"SEM MOVIMENTO DE SAQUE"<<'\n';
        }
    }
    else {
        cout<<"SEM MOVIMENTO DE SAQUE"<<'\n';
    }
    if (valores_validos.size() > 0) {
        if(valores_validos.back() > 0)
            cout<<"Maior deposito: "<<fixed<<setprecision(2)<<valores_validos.back()<<'\n';
        else {
            cout<<"SEM MOVIMENTO DE DEPOSITO"<<'\n';
        }
    }
    else {
        cout<<"SEM MOVIMENTO DE DEPOSITO"<<'\n';
    }

    cout<<"Erros de saque: "<<erros<<'\n';
    cout<<"Saldo final: R$ "<<fixed<<setprecision(2)<<saldo_atual<<'\n';

    return 0;
}