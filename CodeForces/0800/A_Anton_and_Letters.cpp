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
    string s;
    getline(cin, s);
    set<char> c;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] != '{' && s[i] != ' ' && s[i] != ',' && s[i] != '}') {
            c.insert(s[i]);
        }
    }
    // copy(all(c), ostream_iterator<char> (cout, " ")); cout << '\n';
    cout << c.size();
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}