#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
    
*/

void solve() {
    ll n, x; cin>>n;
    ll minn = INT_MAX;
    ll dia = 0;
    for (ll i = 0; i < n; i++) {
        cin>>x;
        if (x < minn) {
            minn = x;
            dia = i;
        }
    }
    cout << dia << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}