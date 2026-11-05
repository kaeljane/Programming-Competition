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
// 08/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    string S; cin>>S;

    ll resposta = S.size();

    bool valido = true;
    ll qt = 0;
    string R = to_string(resposta);

    // cout << R << '\n';
    for(ll i = 0; i < S.size(); i++) {
        if (S[i] == '4' || S[i] == '7') qt +=1;
    }
    // cout << qt << '\n';
    if (qt == 4 || qt == 7) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}