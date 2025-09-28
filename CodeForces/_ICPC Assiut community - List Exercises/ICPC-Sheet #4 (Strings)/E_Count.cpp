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
    string S; cin>>S;
    vl lista;
    for (ll i = 0; i < S.size(); i++) {
        lista.push_back(S[i] - '0');
    }
    cout<<accumulate(lista.begin(), lista.end(), 0LL) <<'\n';
    return 0;
}