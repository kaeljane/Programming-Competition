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
    ll a, b; cin>>a>>b;
    ll soma = a+b;
    bool resposta = true;

    for (ll i = 2; i < soma/2; i++) {
        if (soma % i == 0) {
            resposta = false;
            break;
        }
    }
    if (resposta) cout << "Xau" << '\n';
    else cout << "Xi" << '\n';

    return 0;
}