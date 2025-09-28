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
    ll n; cin>>n;
    for (ll i = n; i < 2*n; i++) {
        if (i & 2 != 0) cout<<i<<'\n';
    }

    return 0;
}