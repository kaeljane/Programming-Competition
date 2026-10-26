#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    string s;
    cin>>s;
    for (ll i = 0; i < s.size(); i++) {
        if (s.size()-i >=3) {
            if (s[i] == 'R' && s[i+1] == 'B' && s[i+2] == 'L' ||
                s[i] == 'R' && s[i+1] == 'L' && s[i+2] == 'B' ||
                s[i] == 'B' && s[i+1] == 'R' && s[i+2] == 'L' ||
                s[i] == 'B' && s[i+1] == 'L' && s[i+2] == 'R' ||
                s[i] == 'L' && s[i+1] == 'B' && s[i+2] == 'R' ||
                s[i] == 'L' && s[i+1] == 'R' && s[i+2] == 'B'
            ) {
                cout << "C"; i+=2;
                continue;
            }
        }
        if (s[i] == 'R') cout << "S";
        else if (s[i] == 'B') cout << "K";
        else if (s[i] == 'L') cout << "H";
    }
    cout << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}