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

ll n, t, l, x, y, z, caso = 1, v, calc, k = 0;
string s, a, b, c;

/* (mind )
    (((num % n) + n) % n ) - modulo em numero negativo
    quantas casas eu tenho que andar? -> k

    v -> onde começa a andar (colocar em 0-based)

    36min 27sec
    
*/
void solve(){
    
    cin>>n>>v;
    k = 0;
    v--; //
    
    for (ll i = 0; i < n; i++) {
        cin>>x;
        k += x;
    }

    if (v+k >= 0) {
        calc = (v+k) % n;
    }
    else {
        calc = (((v+k) % n) + n ) % n;
    }

    cout << "Caso " << caso << ": " << calc + 1 << el;
    caso++;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();

    return 0;
}