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
    ll n; cin>>n;
    ld a, b;
    ld soma=0;
    for (ll i = 0; i < n; i++) {
        cin>>a>>b;
        soma += a*b;
    }
    cout << fixed << setprecision(3) << soma << '\n';

    return 0;
}