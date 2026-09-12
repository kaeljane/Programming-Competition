#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    anagrama, sim ou nao
*/

void solve() {
    string s; cin>>s;

    if (s.size() == 8 &&
        s[0] >= 'A' && s[0] <= 'Z' &&
        s[1] >= 'A' && s[1] <= 'Z' &&
        s[2] >= 'A' && s[2] <= 'Z' &&
        s[3] == '-' &&
        isdigit(s[4]) && 
        isdigit(s[5]) && 
        isdigit(s[6]) &&
        isdigit(s[7])
    ) cout << 1 << '\n';
    else if (
        s.size() == 7 &&
        s[0] >= 'A' && s[0] <= 'Z' &&
        s[1] >= 'A' && s[1] <= 'Z' &&
        s[2] >= 'A' && s[2] <= 'Z' &&
        isdigit(s[3]) &&
        s[4] >= 'A' && s[4] <= 'Z' &&
        isdigit(s[5]) && isdigit(s[6])
    ) cout << 2 << '\n';
    else cout << 0 << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
