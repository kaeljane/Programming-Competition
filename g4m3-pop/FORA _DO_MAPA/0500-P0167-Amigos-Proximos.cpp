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
    string nome, resposta = ""; cin>>nome;
    for (ll i = 0; i < 3; i++) {
        resposta.push_back(nome[i]);
    }
    cout<<resposta<<'\n';
    return 0;
}