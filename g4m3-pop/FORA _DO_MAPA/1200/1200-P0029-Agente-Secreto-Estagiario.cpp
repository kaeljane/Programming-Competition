#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 26/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    descobrir senha
    40min
    
*/

void solve(){
    cin>>n;
    ll minn = 0;
    ll maxx = 0;
    ll atual = 0;
    vl v(n);  for (ll i = 0; i < n; i++) {
        cin>>v[i];
        atual += v[i];
        minn = min(minn, atual);
        maxx = max(maxx, atual);
    }
    ll ampl = maxx - minn;
    cout << n+1 << " " << 10 - ampl << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}