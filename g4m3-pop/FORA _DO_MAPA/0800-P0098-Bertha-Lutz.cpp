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
    string numero; cin>>numero;
    ll numero__ = stoll(numero);
    ll tamanho = numero.size();
    ll soma=0;
    ll soma_aux=0;
    string aux = "", aux_2 = "";
    if (tamanho % 3 == 0) {
        cout << "é divisivel por 3" << '\n';
        for ( ll i = 0; i < tamanho; i++) {
            aux.push_back(numero[i]);

            if (aux.size() == tamanho/3) {
                soma += stoll(aux);
                aux = "";
            }
        }
        soma_aux = soma;
    }
    else {
        ll maior = ceil(tamanho/3.0);
        for ( ll i = 0; i < tamanho-1; i++) {
            aux.push_back(numero[i]);
            soma_aux = soma;
            
            if (aux.size() == maior) {
                soma += stoll(aux);
                cout << "Soma Auxiliar: " << aux << '\n';
                aux = "";
                
            }

            for ( ll j = 0; j < tamanho && (j != i && j != i-1); j++) {
                aux_2.push_back(numero[j]);

                if (aux.size() == tamanho/3) {
                    soma += stoll(aux_2);
                    aux = "";
                    if (soma >= soma_aux) soma_aux = soma;
                }
            }
        }

    



    }


    cout << soma_aux << '\n';

    return 0;
}