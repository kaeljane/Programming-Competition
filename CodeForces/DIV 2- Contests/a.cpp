#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    cada teste tem l e r
    (- 4, -1,) (2, 3), 5

    (- 4 -1 + 2 + 3) + (5) == 5
    

*/


void solve() {
    ll l, r; cin>>l>>r;


    // casos possiveis
    if (l == 0 && r == 0) {
        cout << 0 << '\n';
    }
    else if ( l == 0 && r > 0) { 
        cout << r - 1 << '\n';
    }
    else if ( l < 0 && r == 0 ) { // ok
        cout << abs(l) - 1 << '\n';
    }
    else if (l < 0 && r < 0) {
        cout << abs(l - (r)) << '\n';
    }
    else if (l > 0 && r > 0) {
        cout << r - l << '\n';
    }
    else if (l < 0 && r > 0) { // duv
        if ( l + (r) == 0 || l + (r) == 1) {
            cout << 0 << '\n';
        }
        else {
            cout << abs(r + l) - 1 << '\n';
        }
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

  
    return 0;
}