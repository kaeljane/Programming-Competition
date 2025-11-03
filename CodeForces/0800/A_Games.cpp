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
    ll n, a, b, qt=0; cin>>n;
    vl A(n);
    vl B(n);
    for (ll i = 0; i < n; i++) {
        cin>>a>>b;
        A[i] = a;
        B[i] = b;
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) if (A[i] == B[j]) qt++;
    }

    cout << qt << '\n';
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}