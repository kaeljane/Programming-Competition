#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 28/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll t; cin>>t;
    string teste, resposta = "NO";
    while (t--) {
        cin>>teste;
        for(ll i = 0; i < teste.size(); i++) {
            if (teste[i] == 'B') {
                resposta = "YES";
                break;
            }
        }
        if (resposta == "YES") break;

    }
    cout<<resposta<<'\n';

    return 0;
}