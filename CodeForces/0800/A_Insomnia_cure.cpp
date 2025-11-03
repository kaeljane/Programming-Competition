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
// 20/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll k, l, m, n, d; cin>>k>>l>>m>>n>>d;
    set<ll> c;
    for (ll i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0);
        else c.insert(i);
    }
    cout << d - c.size();
}
int main() {
    ___
    
    solve();
    
    return 0;
}