#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/
ll cases = 1;
void solve() {
    ll n, x;
    while (cin>>n) {
        if (n == 0) break;
        ll pos = 0, zeros = 0;
        for (ll i = 0; i < n; i++) {
            cin>>x; if (x > 0) pos++; if (x == 0) zeros++;
        }

        cout << "Case " << cases << ": " << pos - zeros << '\n';
        cases++;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}