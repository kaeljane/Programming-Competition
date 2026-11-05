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
    ll l; cin>>l;
    string texto;
    vector<char>  alfabeto = {'a', 'b', 'c', 'd','e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    while (l--) {
        getline(cin, texto);
        for (ll i = 0 ; i < texto.size(); i++) {
            texto[0] = tolower(texto[0]);
            for(auto& c : alfabeto) {
                if (texto[i] == c ){
                    c = '0';
                }
            }
        }
    }

    for (auto& c : alfabeto) {
        if (c != '0') cout<<c;
    }
    // cout<<'\n';

    return 0;
}