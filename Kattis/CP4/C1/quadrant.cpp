#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll x, y; cin>>x>>y;

    if (x > 0 && y > 0) {
        cout << 1 << '\n';
    }
    else if (x > 0 && y < 0) {
        cout << 4 << '\n';
    }
    else if (x < 0 && y < 0) {
        cout << 3 << '\n';
    }
    else  {
        cout << 2 << '\n';
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