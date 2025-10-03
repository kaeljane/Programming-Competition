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
    ll numero;
    vl linha_1;
    vl linha_2;
    for (ll i = 0; i < t; i++) {
        cin>>numero;
        linha_1.push_back(numero);
    }
    for (ll i = 0; i < t; i++) {
        cin>>numero;
        linha_2.push_back(numero);
    }
    for (ll i = 0; i < t; i++) {
        if (linha_1[i] > linha_2[i]) cout<<linha_1[i]<<' ';
        else cout<<linha_2[i]<< ' ';
    }

    return 0;
}