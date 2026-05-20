#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define el '\n'
using namespace std;

ll n, t, x, y;
string s;

const ll MOD = 1000000000 + 7;

/*
(1) 1 1 1 1 1 1 1

2*tam_atual
2*tam_atual

(2) 2 1 1 1 1 1
(3) 1 2 1 1 1 1
(4) 1 1 2 1 1 1
(5) 1 1 1 2 1 1
(6) 1 1 1 1 2 1
(7) 1 1 1 1 1 2

(8) 2 2 1 2 2
(9) 1 1 2 2 1
(9) 1 1 2 2 1
(9) 1 1 2 2 1



*/

void solve () {
    cin>>n;
    
    ll ans = 1;
    vector<ll> permutacao;
    ll diffNum = 2;

    ll tres = 4;
    ll calc = 4;
    if (n == 3) {cout << 4 << el; return;}
    
    for (ll i = 4; i <= n; i++) {
        calc = calc * 2 % MOD;
        if (i == n) {
            if (i&1) {
                cout << calc + 1 << el;
            }
            else {
                cout << calc << el;
            }
        }
        
    }
    
}
signed main() {
    solve();
    
}
