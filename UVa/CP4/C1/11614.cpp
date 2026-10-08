#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    k(k+1)/2 <= n
    k^2 + k -2n <= 0

    -b +- delta / 2*a

*/

void solve() {
    ll n, x; cin>>n;

    for (ll i = 0; i < n; i++) {
        cin>>x;
        // calc = k*k + k - 2x <= 0

        ll delta = sqrt(1 + 8*x);


        ll calc1 = (-1 + delta) / 2;
        ll calc2 = (-1 - delta) / 2;

        cout << max(calc1, calc2) << '\n';


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