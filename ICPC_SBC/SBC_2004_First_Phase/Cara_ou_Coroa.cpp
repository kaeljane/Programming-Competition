#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, x;
    while(cin>>n) {
        if (n == 0) break;
        ll qt1 = 0;
        for (ll i = 0; i < n; i++) {
            cin>>x;
            if (x == 1) qt1++;
        }
        cout << "Mary won " << n - qt1 << " times and John won " << qt1 << " times" << '\n';
        
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