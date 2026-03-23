#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 22/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    TEM QUE APRENDER A LER ;-;
    1m 59s
    6m 36s

*/

void solve(){
    cin>>n;
    vector<string> v;
    for (ll i = 0; i < n; i++) {
        cin>>s;
        if (count(all(v), s) == 0) {
            v.push_back(s);
        }
    }
    
    for (auto &x : v) cout << x << el;
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}