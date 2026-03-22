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
    
*/

void solve(){
    cin>>n;
    set<ll> conj; 
    for (ll i = 0; i < n; i++) {
        cin>>x;
        conj.insert(x);
    }
    if (conj.size() != n) {
        cout << "YES" << el;
    }
    else cout << "NO" << el;
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}

