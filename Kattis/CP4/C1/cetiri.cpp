#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    vector<ll> v(3);
    cin>>v[0]>>v[1]>>v[2];
    sort(all(v));
    
    ll rAntAnt = v[1] - v[0];
    ll rAnt = v[2] - v[1];
    
    if (rAntAnt == rAnt) cout << v[2] + rAnt << '\n';
    else if (rAntAnt < rAnt) {
        cout << v[1] + rAntAnt << '\n';
    }
    else cout << v[0] + rAnt << '\n';
    
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}