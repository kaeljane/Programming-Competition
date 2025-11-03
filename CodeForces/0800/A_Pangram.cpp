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
    string s; cin>>s;
    set<char> al = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (ll i=0; i<s.size(); i++){
        al.erase(tolower(s[i]));
    }

    if (al.size() == 0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}
int main() {
    ___
    
    solve();
    
    return 0;
}