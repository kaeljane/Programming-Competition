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
    ll a, b;
    cin>>a>>b;
    ll calculo = a*b;

    if (calculo % 2 == 0) cout << "Even" << '\n';
    else cout << "Odd" << '\n';

    return 0;
}