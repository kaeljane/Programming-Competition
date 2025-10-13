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
    ll n; cin>>n;
    ll k = 1;
    ll numero;
    ll cout_ = 1;
    for (ll i = 0; i < n; i++) {
        cin>>numero;
        if (i == 0) {
            k = numero;
            cout_ = 1;
        }
        else if (numero > k) {
            cout_+=1;
            k = numero;
        }
        else {
            cout_ = 1;
            k = numero;
        }
    }
    cout << cout_ << '\n';
    return 0;
}