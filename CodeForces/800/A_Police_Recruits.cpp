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
    ll t, um, qt=0, r=0; cin>>t;
    vl v;
    for (ll i = 0; i < t; i++) {
        cin>>um;
        v.push_back(um);
    }

    for (ll i=0;i<t;i++) {
        qt += v[i];
        if (qt >= 0);
        else {
            r++;
            qt=0;
        }
    }
    cout << r << '\n';
}
int main() {
    ___
    
    solve();
    
    return 0;
}