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
// 21/10/2025 by Kaeljane
using namespace std;

void solve() {
    vl n(3);
    for (ll i=0; i<3; i++) cin>>n[i];
    sort(all(n));
    cout << (n[1] - n[0]) + (n[2] - n[1]) << '\n';
}
int main() {
    ___
    
    solve();
    
    return 0;
}