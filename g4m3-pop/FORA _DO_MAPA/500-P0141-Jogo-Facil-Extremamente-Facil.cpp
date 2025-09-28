#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 27/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll numero;
    vl lista;
    while(cin>>numero) {
        lista.push_back(numero);
    }
    sort(lista.begin(), lista.end());
    copy(lista.begin(), lista.end(), ostream_iterator<ll> (cout, "\n"));

    return 0;
}