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

void solve() {
    ll y; cin>>y;
    for (ll i = y+1; i < 10000; i++) {
        set<char> c;
        string year = to_string(i);
        for (ll j = 0; j < year.size(); j++) {
            c.insert(year[j]);
        }
        if (c.size() == 4) {
            cout << year << '\n';
            break;
        }
    }
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}