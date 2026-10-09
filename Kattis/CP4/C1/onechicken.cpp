#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    n -> num de pessoas no buffet
    m -> num de peças de frango


*/

void solve() {
    ll n, m; cin>>n>>m;

    if (m - n == 1) {
        cout << "Dr. Chaz will have " << 1 << " piece of chicken left over!" << '\n';
    }
    else if (m - n > 0) {
        cout << "Dr. Chaz will have " << m-n << " pieces of chicken left over!" << '\n';
    }
    else {
        if (n - m == 1) {
            cout << "Dr. Chaz needs 1 more piece of chicken!" << '\n';
        }
        else 
            cout << "Dr. Chaz needs " << n - m << " more pieces of chicken!" << '\n';
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