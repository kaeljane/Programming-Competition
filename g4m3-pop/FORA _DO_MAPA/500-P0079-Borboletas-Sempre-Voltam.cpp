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
    ll k; cin>>k;
    string s, resposta = "Nem Sempre"; cin>>s;

    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == 'B') {resposta = "Borboletas Sempre Voltam"; break;}
    }
    cout<<resposta<<'\n';
    return 0;
}