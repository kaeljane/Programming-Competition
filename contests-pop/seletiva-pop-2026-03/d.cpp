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
    // cin>>n;
    cin>>s;
    n = s.size();
    a = "";
    b = "1";
    bool passou = false;
    for (ll i = 0; i < n; i++) {
        if (passou) {
            b += '0';
        }
        if (s[i] == '.') {
            passou = true;
        }
        if (s[i] != '.') {
            a += s[i];
        }
    }

    // transformar a e b em numero;

    ll la = stoll(a);
    ll lb = stoll(b);

    // logica principal ;() 

    ll mdc = __gcd(la, lb);

    la /= mdc;
    lb /= mdc;

    if (lb == 1) {
        cout << la << el;
    }
    else cout << la << "/" << lb << el;

    
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}