#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 28/09/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll m, area = 1; cin>>m;

    if (m != 0) {
        for (ll i = 0; i < m; i++) {
            area*=2;
        }
    }
    cout<<area<<'\n';
    return 0;
}