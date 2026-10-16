#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    char c; string s;
    cin>>c>>s;

    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            cout << i+1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}