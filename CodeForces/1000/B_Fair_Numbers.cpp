#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 05/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    1h 01m 10s

*/

bool check(ll x) {
    bool ans = true; // até que se prove o contrário
    ll num = x;
    while (x > 0) {
        if (!ans) break;
        else if (x % 10 != 0 && num % (x % 10) != 0) ans = false;
        x /= 10;
    }
    return ans;

}

void solve(){
    cin>>n;

    while (true) {
        ll back = n;
        if (check(n)) {
            cout << n << el;
            return;
        }
        else n++;
    }

    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}