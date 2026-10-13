#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, x; cin>>n;
    ll resp = -INT_MAX;
    cin>>x;
    ll maxAtual = x;
    for (ll i = 1; i < n; i++) {
        cin>>x;
        resp = max(resp, maxAtual - x);
        maxAtual = max(maxAtual, x);
    }

    cout << resp << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}