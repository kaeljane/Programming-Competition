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
    vs frases;
    string str;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--){
        getline(cin, str);
        reverse(str.begin(), str.end());
        frases.push_back(str);
    }
    for (ll i = frases.size()-1; i >=0; i--) {
        cout << frases[i] << '\n';
    }
    return 0;
}