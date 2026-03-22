#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
// Seletiva POP
// Bora se divertir

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    

*/

void solve(){
    cin>>n;
    vector<long long> v(n);  

    for (ll i = 0; i < n; i++) cin>>v[i];
    ll med = n/2;

    sort(v.begin(), v.end());

    cout << v[med] << el;


}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}