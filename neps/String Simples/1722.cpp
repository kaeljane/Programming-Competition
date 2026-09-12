#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    
*/

ll pot(ll base, ll exp) {
    ll res = 1;
    for (ll i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

void solve() {
    ll n, t, ans = 0; cin>>n;
    string s;

    for (ll i = 0; i < n; i++) {
        cin>>s; // termo corrompido

        char a = s[s.size() - 1];
        s.pop_back();

        t = stoll(s);
        
        ans += pot(t, (ll)(a - '0'));


    } 
    cout << ans << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
