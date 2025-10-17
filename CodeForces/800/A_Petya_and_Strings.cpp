#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 16/10/2025 by Kaeljane
using namespace std;

void solve() {
    string f, s; cin>>f>>s;

    ll soma_f = 0;
    ll soma_s = 0;

    for (ll i = 0; i < f.size(); i++){
        f[i] = tolower(f[i]);
        s[i] = tolower(s[i]); 
    }

    if (f < s) cout << -1 << '\n';
    else if (f > s) cout << 1 << '\n';
    else cout << 0 << '\n';

}
int main() {
    ___
    
    solve();
    
    return 0;
}