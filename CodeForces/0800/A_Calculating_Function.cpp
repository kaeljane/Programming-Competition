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
// 18/10/2025 by Kaeljane
using namespace std;
// 10^15
void solve() {
    ll n, c; cin>>n;
    if (n % 2 == 0) c = n/2; 
    else c = -((n+1)/2);
    cout << c << '\n';
}
int main() {
    ___
    
    solve();
    
    return 0;
}