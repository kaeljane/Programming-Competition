#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, x; cin>>n;
    
    vector<ll> v;
    
    vector<ll> ans(n); ans[0] = 1;    
    for (ll i = 2; i <= n; i++) {
        cin>>x;
        ans[x+1] = i;
    }

    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << '\n';
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}