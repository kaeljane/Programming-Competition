#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 25/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    13min 48seg    

*/

void solve(){
    while (getline(cin, s)) {
        if (s.find("How") != string::npos) {
            auto it =  s.find("How");
            cout << it + 1 << el;
        }
        else {
            cout << -1 << el;
        }
    }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}