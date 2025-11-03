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
    ll n; cin>>n;
    if (n == 1) cout << "I hate it";
    else {
        for (ll i=1; i <= n; i++) {
            if (i%2 != 0 && i != n) cout << "I hate that ";
            else if (i%2 != 0 && i == n) cout << "I hate it ";
            else if (i%2 == 0 && i != n) cout << "I love that ";
            else cout << "I love it ";
        }
    }
}
int main() {
    ___
    
    solve();
    
    return 0;
}