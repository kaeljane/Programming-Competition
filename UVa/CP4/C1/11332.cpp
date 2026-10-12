#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

ll f(ll n) {
    string s = to_string(n);
    
    ll resp = 0;
    for (ll i = 0; i < s.size(); i++) {
        resp += s[i] - '0';
    }

    return resp;

}

void solve() {
    ll n; 
    while(cin>>n) {
        if (n == 0) break;
        while (true) {
            if (to_string(n).size() == 1) break;
            // logica
            n = f(n);
        }
    
        cout << n << '\n';
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