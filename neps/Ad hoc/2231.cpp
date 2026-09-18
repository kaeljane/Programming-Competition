#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    
*/

void solve() {
    ll n; cin>>n;
    string a, b;
    cout << '[';

    bool b1 = 1;
    for (ll i = 0; i < n; i++) {
        cin>>a>>b;
        if (b1) {
            cout << "('" << a << "', '" << b << "')";
            b1 = 0;
        }
        else {
            cout << ", ('" << a << "', '" << b << "')";
        }
    }
    cout << ']';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
