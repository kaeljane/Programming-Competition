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
    ll n; cin>>n;
    string palavra, substring, resposta = "Bad";


    for (ll i = 0; i < n; i++) {
        cin>>palavra;

        if (palavra.size() == 2 || palavra.size() == 1) {
            cout<<"Bad"<<'\n';
        }
        else {
            for (ll j = 0; j < palavra.size()-2; j++) {
                // substring.push_back(palavra[j]);
                // substring = palavra[j] + palavra[j+1] + palavra[j+2];

                substring.push_back(palavra[j]);
                substring.push_back(palavra[j+1]);
                substring.push_back(palavra[j+2]);

                // cout<<substring<<'\n';
                if (substring == "010" || substring == "101") {
                    resposta = "Good";
                    substring.clear();
                    break;
                }
                else {
                    substring.clear();
                }
                
            }
            cout<<resposta<<'\n';
            resposta = "Bad";
        }
    }

    return 0;
}