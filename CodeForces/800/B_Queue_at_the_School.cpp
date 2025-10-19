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
    ll t, n; cin>>t>>n;
    string s; cin>>s;
    while(n--) {
        for (ll i = 0; i < t-1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout << s << '\n';

}
int main() {
    ___
    
    solve();
    
    return 0;
}