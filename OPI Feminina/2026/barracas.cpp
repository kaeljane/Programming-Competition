#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define el '\n'
using namespace std;

ll n, t;
string s;

void solve () {
    cin>>s;
    n = s.size();

    bool ans = true;
    for (ll i = 1; i <= n; i++) {
        if (i&1) { // impar
            if ('a' <= s[i-1] && s[i-1] <= 'z' ); // 1-based -> 0-based
            else {cout << "NÃO" << el; return;}
        }
        else {
            if ('A' <= s[i-1] && s[i-1] <= 'Z' ); // 1-based -> 0-based
            else {cout << "NÃO" << el; return;}
        }
    }

    cout << "SIM" << el;
    
}
signed main() {
    solve();

}
