#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n; cin>>n; string s;
    while (n--) {
        cin>>s;
        ll qt = 0; bool f = 0;
        ll ans = 0;
        for (ll i = 0; i < s.size(); i++) {
            if (s[i] == 'O' && f == 0) {
                f = 1;
                qt = 1;
                ans += qt;
            }
            else if (s[i] == 'O') {
                qt++;
                ans += qt;
            }
            else {
                f = 0;
                qt = 0;
            }
        }
        cout << ans << '\n';


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