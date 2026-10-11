#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/
ll cases = 1;
void solve() {
    ll n, x; cin>>n;
    ll maxx = 0;
    for (ll i = 0; i < n; i++) {
        cin>>x;
        maxx = max(maxx, x);
    }

    cout << "Case " << cases << ": " << maxx << '\n';
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