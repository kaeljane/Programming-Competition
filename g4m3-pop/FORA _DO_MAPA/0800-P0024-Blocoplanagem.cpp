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
    ll bloco;
    ll resposta = 0;
    ll menor;
    vl blocoS;
    for(ll i = 0; i < 5; i++) {
        cin>>bloco;
        blocoS.push_back(bloco);
    }
    menor = *min_element(blocoS.begin(), blocoS.end());
    for (ll i = 0; i < 5; i++) {
        resposta += blocoS[i] - menor;
    }
    cout <<resposta<<'\n';

    return 0;
}