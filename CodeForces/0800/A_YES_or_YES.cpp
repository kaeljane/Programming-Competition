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
// 22/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll n; cin>>n;
    string s;
    while(n--){
        cin>>s;
        transform(all(s), s.begin(), ::tolower);
        // cout << s << '\n';
        if (s == "yes") cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}