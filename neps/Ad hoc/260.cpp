#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    
*/

void solve() {
    ll p1, c1, p2, c2;
    cin>>p1>>c1>>p2>>c2;

    if (p1 * c1 == p2 * c2) cout << "0" << '\n';
    else {
        if (p1 * c1 > p2 * c2) cout << "-1" << '\n';
        else cout << "1" << '\n';
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
