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
    ll n, m; cin>>n>>m;
    vl lista;
    for (ll i = 1; i < 29 ; i++) {
        if (i == n || i == m) continue;
        else {
            lista.push_back(i);
        }
    }
    copy(lista.begin(), lista.end(), ostream_iterator<ll> (cout, "\n"));

    return 0;
}