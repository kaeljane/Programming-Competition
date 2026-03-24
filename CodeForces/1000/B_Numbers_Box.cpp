#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 24/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, c;
string s, a, b;

/* (mind )
    30m 18s
    32m 59s
*/

void solve(){
    cin>>l>>c;
    
    vl v(l*c);  for (ll i = 0; i < l*c; i++) cin>>v[i];
    bool temZero = false;
    
    if (count(all(v), 0)) {
        temZero = true;
    }
    ll qtNegativo = 0;

    if (!temZero) {
        for (ll i = 0; i < l*c; i++) {
            if (v[i] < 0) qtNegativo++;
        }
    }
    
    if (temZero || !(qtNegativo&1)) {
        for (ll i = 0; i < l*c; i++) {
            if (v[i] < 0) v[i] *= (-1);
        }
        ll ans = 0;
        for (ll i = 0; i < l*c; i++) {
            ans += v[i];
        }

        cout << ans << el;
        return;
    }

    // caso qt neg é impar -> deixar o negativo no menor numero

    
    vector<ll> backupV = v;
    for (ll i = 0; i < l*c; i++) {
        if (backupV[i] < 0) backupV[i] *= (-1); 
    }
    auto itMin = min_element(all(backupV)); // tomar cuidado com isso tem que testar como se todos os elementos fossem positivos!! fazer uma matriz backup
    
    ll idxMin = itMin - backupV.begin();

    for (ll i = 0; i < l*c; i++) {
        if (idxMin != i && v[i] < 0) {
            v[i] *= (-1);
        }
    }

    if (v[idxMin] > 0) {
        v[idxMin] *= (-1);
    }

    ll ans = 0;
    for (ll i = 0; i < l*c; i++) {
        ans += v[i];
    }
    cout << ans << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}