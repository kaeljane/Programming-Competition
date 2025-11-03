#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(x) x.begin(), x.end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 16/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll n; cin>>n; string s; cin>>s;
    map<char, int> mapa;
    for (auto& x : s) mapa[x]++;
    if (mapa['D'] > mapa['A']) cout << "Danik" << '\n';
    else if (mapa['D'] < mapa['A']) cout << "Anton" << '\n';
    else cout << "Friendship" << '\n';
}
int main() {
    ___
    
    solve();
    
    return 0;
}