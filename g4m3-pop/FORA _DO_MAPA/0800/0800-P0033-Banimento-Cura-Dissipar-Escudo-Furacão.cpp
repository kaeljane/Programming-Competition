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
    map<string, ll> letras;
    string letra;
    string S; cin>>S;
    ll maior = INT_MIN;
    string resposta;
    for(ll i = 0; i < S.size()-1; i++) {
        letra = "";
        letra.push_back(S[i]);
        letras[letra] += 1;
        
    }
    for (auto& m : letras) {
        if (m.second > maior) {
            maior = m.second;
            resposta = m.first;
        }
    } 
    cout << resposta << '\n';

    return 0;
}