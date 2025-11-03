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
    ll k, n, w, valor=0; cin>>k>>n>>w;
    for (ll i = 1; i <= w; i++) {
        valor += i*k;
    }

    if (valor > n) cout << valor - n << '\n';
    else cout << 0 << '\n';
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}