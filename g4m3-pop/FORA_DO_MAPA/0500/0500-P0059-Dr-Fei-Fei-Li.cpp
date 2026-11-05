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
    string coisa; cin>>coisa;
    string analise = "", resposta = "NO";
    for(ll i = 0; i < coisa.size()-1 ; i++) {
        analise.push_back(coisa[i]); analise.push_back(coisa[i+1]);
        if (analise == "oO" || analise == "Oo") {
            resposta = "YES";
            break;
        }
        if (analise.size() == 2) analise.clear();
    }
    cout<<resposta<<'\n';

    return 0;
}