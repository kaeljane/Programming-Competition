#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 31/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    qualquer jogador pode ser o primeiro a comer
    o jogador que come o último prato é considerado o vencedor.

*/

void solve(){
    cin>>n;
    map<ll, ll> mapa;
    vl v(n);  for (ll i = 0; i < n; i++) {
        cin>>v[i];
        mapa[v[i]]++;
    }
    sort(all(v));
    ll ultimo = v.back();

    cout << mapa[ultimo] << el;

    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}