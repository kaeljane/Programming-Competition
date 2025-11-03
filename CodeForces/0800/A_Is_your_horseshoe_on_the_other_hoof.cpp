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
// 19/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll n;
    set<ll> c;
    while(cin>>n) c.insert(n);
    if (4 - c.size() >= 0) cout << 4 - c.size();
    else cout << 0;
}
int main() {
    ___
    
    solve();
    
    return 0;
}