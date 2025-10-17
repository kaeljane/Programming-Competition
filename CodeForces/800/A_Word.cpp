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
    string s; cin>>s;
    ll M=0, m=0;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            m++;
        }
        else M++;
    }

    if (M > m) {
        for (auto& x : s) {
            x = toupper(x);
        }
    }
    else if (M == m) {
        for (auto& x : s) {
            x = tolower(x);
        }
    }
    else {
        for (auto& x : s) {
            x = tolower(x);
        }
    }
    
    cout << s << '\n';
}
int main() {
    ___
    
    solve();
    
    return 0;
}