#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define el '\n'
using namespace std;

ll n, t;
string s;

void solve () {
    cin>>n;

    for (ll i = 1; i <= 9; i++) {
        for (ll j = 1; j <= 9; j++) {
            if ((i * j) == n) {
                cout << "SIM" << el;
                return;
            }
        }
    }
    cout << "NÃO" << el;
    
}
signed main() {
    solve();
    
}
