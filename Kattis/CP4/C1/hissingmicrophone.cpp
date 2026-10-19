#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    string s;
    cin>>s;

    for (ll i = 1; i < s.size(); i++) {
        if (s[i] == 's' && s[i-1] == s[i]) {
            cout << "hiss" << '\n';
            return;
        }
    }

    cout << "no hiss" << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}