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
    ll nivel = 0;
    string nome, vogal = "no"; getline(cin, nome);
    vector<char> vogais = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    for (ll i = 0; i < nome.size(); i++) {
        for(ll j = 0; j < vogais.size(); j++){
            if (nome[i] == vogais[j]) {
                vogal = "yes";
                break; 
                
            }
        } 
        if(('A' <= nome[i] && nome[i] <= 'Z') || ('a' <= nome[i] && nome[i] <= 'z')) {
            if (vogal == "yes") {nivel+=2; vogal="no";} else nivel++;
        }

    }
    cout<<nivel<<'\n';


    return 0;
}