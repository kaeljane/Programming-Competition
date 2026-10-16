#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll h, x, y; cin>>h>>x>>y;
    ll minn = min(x, y); 

    if( (12 - minn <= h || minn >= h) && h%2 == x%2 && x%2 == y%2) {
        cout << "SIM" << '\n';
    }
    else {
        cout << "NAO" << '\n';
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