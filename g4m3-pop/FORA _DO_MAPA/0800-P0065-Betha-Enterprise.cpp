#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 02/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll t; cin>>t;
    vs p_imprimidas;
    ll soma=0;
    string palavra;
    while (t--) {
        
        cin>>palavra;
        if ((soma + palavra.size()) <= 144) {
            soma += palavra.size();
            p_imprimidas.push_back(palavra);
        }
        else break;
    }
    copy (p_imprimidas.begin(), p_imprimidas.end(), ostream_iterator<string> (cout, "\n"));

    return 0;
}