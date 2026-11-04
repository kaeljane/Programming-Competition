#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    string s, a; cin>>s>>a;

    ll j = 0;
    bool f = 0;

    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == a[j]) j++;
        else if (s[i] == '?') {
            s[i] = a[j];
            j++;
        }
        if (j == a.size()) {
            f = 1;
            break;
        }
    }
    for (ll i = 1; i < s.size(); i++) {
        if (s[i] == '?') {
            s[i] = s[i-1];
        }
    }

    
    if (f) {
        cout << "YES" << '\n' << s << '\n';
    }
    else {
        cout << "NO" << '\n';
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}