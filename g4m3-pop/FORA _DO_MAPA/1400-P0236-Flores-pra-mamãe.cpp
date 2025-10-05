#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 04/10/2025 by Kaeljane in Maratona Superior POP
using namespace std;

int main() {
    ___
    ll Q, flores, numero; cin>>Q>>flores;
    vector<ll> qt_dia;
    vector<ll> flores_pe_max;
    bool continuee = true;
    int dia = 1;
    ll flores_conseguidas = 0;
    vector<ll> qt_dia_backup;
    for (ll i = 0; i < Q*2;i++ ) {
        cin>>numero;
        if (i < Q) {
            qt_dia.push_back(numero);
        }
        else {
            flores_pe_max.push_back(numero);
        }
    }
    qt_dia_backup = qt_dia;
    
    while(continuee) {
        for (ll j = 0 ; j < qt_dia.size(); j++) {
            if (qt_dia[j] <= dia) {
                if (flores_pe_max[j] > 0){
                    flores_conseguidas+=1;
                    qt_dia[j] += qt_dia_backup[j];
                    flores_pe_max[j] -= 1;
                    if (flores_conseguidas >= flores) {
                        continuee = false;
                        break;
                    } 
                }
                
            }
        }
        if (flores_conseguidas < flores) dia+=1;
    }
    cout << dia << '\n';
    
    return 0;

    return 0;
}

    
