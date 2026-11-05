#include <bits/stdc++.h>
#define ll long long
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
    ll n; cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string frase;
    char inicial;
    vc letras = {'0'};
    ll resposta = 0;

    for (ll i = 0; i < n; i++){
        getline(cin, frase);
        inicial = frase[0];

        auto it = find(letras.begin(), letras.end(), inicial);
        if (it == letras.end()){ // ele nao está no vector.
            resposta += 1;
            letras.push_back(inicial);
        }
    }
    cout << resposta << '\n';

    return 0;
}