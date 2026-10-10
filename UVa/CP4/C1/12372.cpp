#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/
ll cases = 1;
void solve() {
    ll x, y, z; cin>>x>>y>>z;

    if (x <= 20 && y <= 20 && z <= 20) {
        cout << "Case " << cases << ": good" << '\n';
    }
    else {
        cout << "Case " << cases << ": bad" << '\n';
    }
    cases++;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}