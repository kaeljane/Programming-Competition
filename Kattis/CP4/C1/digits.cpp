#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    string s;

    while(cin>>s) {
        if (s == "END") break;
        // edge case

        for (ll i = 1; ; i++) {
            if (s == to_string(s.size())) {
                cout << i << '\n';
                break;
            }
            else {
                s = to_string(s.size());
            }
        }
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