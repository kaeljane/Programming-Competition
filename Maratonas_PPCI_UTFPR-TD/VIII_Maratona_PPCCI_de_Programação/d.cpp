#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll a, g; cin>>a>>g;

    if (a > g) {
        cout << "Andre ficou com a laranja" << '\n';
    }
    else if (a < g) {
        cout << "Gabriel ficou com a laranja" << '\n';
    }
    else {
        if (a&1) {
            cout << "Gabriel ficou com a laranja" << '\n';
        }
        else {
            cout << "Andre ficou com a laranja" << '\n';
        }
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