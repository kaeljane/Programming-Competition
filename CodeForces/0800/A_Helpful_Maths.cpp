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
    vc v(ceil(s.size()/2.0)); // OK
    string r;
    for(ll i = 0, j = 0; i < s.size(); i+=2, j++){
        v[j] = s[i];
    }
    sort(all(v));
    // cout << '\n';
    
    for(ll i = 0, j= 0; i < s.size(); i++) {
        if (i % 2 == 0) {r.push_back(v[j]); j++;}
        else if (i != (s.size() - 1)) r.push_back('+');
    }
    cout << r << '\n';
}
int main() {
    ___
    
    solve();
    
    return 0;
}