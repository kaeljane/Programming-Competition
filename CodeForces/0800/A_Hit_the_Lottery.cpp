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
    ll n, qt=0; cin>>n;
    
    qt += n/100;
    n = n%100;

    qt += n/20;
    n = n%20;

    qt += n/10;
    n = n%10;

    qt += n/5;
    n = n%5;

    qt += n/1;
    n = n%1;
    
    cout << qt << '\n';
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}