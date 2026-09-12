#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    
*/
void solve() {
    map<char, ll> m;
    m['A'] = 2, m['B'] = 2, m['C'] = 2;
    m['D'] = 3, m['E'] = 3, m['F'] = 3;
    m['G'] = 4, m['H'] = 4, m['I'] = 4;
    m['J'] = 5, m['K'] = 5, m['L'] = 5;
    m['M'] = 6, m['N'] = 6, m['O'] = 6;
    m['P'] = 7, m['Q'] = 7, m['R'] = 7, m['S'] = 7;
    m['T'] = 8, m['U'] = 8, m['V'] = 8;
    m['W'] = 9, m['X'] = 9, m['Y'] = 9, m['Z'] = 9;
    
    string s; cin>>s;
    for (ll i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            // fazer continhas
            cout << m[s[i]];
        }
        else {
            cout << s[i];
        }
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
