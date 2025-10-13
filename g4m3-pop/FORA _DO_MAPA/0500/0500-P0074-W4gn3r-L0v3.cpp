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
    string palavra, resposta = "NO"; cin>>palavra;
    for (ll i = 0; i < palavra.size(); i++) {
        if ('0' <= palavra[i] && palavra[i] <= '9' ) {resposta = "YES"; break;}
    }
    cout<<palavra << " " << resposta << '\n';

    return 0;
}