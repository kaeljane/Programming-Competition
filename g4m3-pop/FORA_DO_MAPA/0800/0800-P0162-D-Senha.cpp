#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 05/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    string S; cin>>S;
    map<char, ll> mapa;

    bool valido = true; // R1
    ll s_caract = 0; // R2
    ll minusculas = 0; // R3
    ll maiusculas = 0; // R4
    ll numeros = 0; // R5
    ll caract_esp = 0; // R6

    for (ll i = 0; i < S.size(); i++) {
        mapa[S[i]] += 1;
    }

    for (auto& c : mapa) {
        if(c.second != 1){valido=false; break;}
        s_caract += c.second;
        if (c.first >= 'a' && c.first <=  'z') minusculas+=1;
        else if (c.first >= 'A' && c.first <=  'Z') maiusculas+=1;
        else if (c.first >= '0' && c.first <=  '9') numeros+=1;
        else caract_esp+=1;
    }

    if (valido == true && s_caract >= 10 && minusculas >= 2 && maiusculas >= 2 && numeros >= 2 && caract_esp >= 2) cout << "S" << '\n';
    else cout << "N" << '\n';

    return 0;
}