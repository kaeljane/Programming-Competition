#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/
ll binPow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp&1) {
            res *= base;
        }
        base *= base;
        exp /= 2;
    }
    return res;
}

void solve() {
    ll n; cin>>n;

    if (n == 3) {
        cout << 24 << '\n';
        return;
    }

    ll pontas = 24 * binPow(4, n - 3);
    ll meio = (n - 3) * 36 * binPow(4, n - 4);
    ll total = pontas + meio;
    cout << total << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}