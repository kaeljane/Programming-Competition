#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    presta atenção no output
*/

void solve() {
    ll x, y; cin>>x>>y;
    
    if (x == 0 && y == 0) cout << "Not a moose" << '\n';
    else if (x == y) cout << "Even " << x + y << '\n';
    else cout << "Odd " << max(x, y)*2 << '\n';
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}