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
    string frase; getline(cin, frase);
    string resposta = "";
    for (ll i = frase.size()-1; i >= 0 ; i--) {
        resposta.push_back(frase[i]);
    }
    cout<<resposta<<'\n';

    return 0;
}