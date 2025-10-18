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
// 17/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll t; cin>>t;
    string a, b, c;
   
    while(t--) { 
        cin>>a>>b>>c;
        for(ll i = 0; i < a.size(); i++) {
            if (a[i] != b[i]){
                if (c[i] == b[i]) a[i] = c[i];
                else if (c[i] == a[i]) b[i] = c[i];
            }
            else a[i] = c[i];
        }
        if (a == b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
int main() {
    ___
    
    solve();
    
    return 0;
}