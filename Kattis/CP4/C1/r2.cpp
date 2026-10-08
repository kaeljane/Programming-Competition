#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    s = (r1 + r2) / 2
    2s = r1 + r2
    r2 = 2s - r1

*/

void solve() {
    ll r1, s; cin>>r1>>s;

    cout << 2*s - r1 << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}