#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) v.begin(), v.end()
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ' '))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 23/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z, qt;
string s, a, b, c;

/* (mind) 
    if, else... 
    
*/
void solve() {
    cin>>t;
    a = "codeforces";
    while (cin>>s) {
        qt = 0;
        for (ll i =0; i <s.size(); i++) {
            if (a[i] != s[i]) qt++;
        }
        cout << qt << '\n';
    }
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}