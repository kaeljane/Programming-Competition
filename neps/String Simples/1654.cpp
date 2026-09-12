#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*

*/

void solve() {
    set<char> cj = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z'};
    string s; getline(cin, s);
    set<char> analise;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == ' ') continue;
        if (isalpha(s[i])) {
            analise.insert(s[i]);
        }
    }

    if (analise == cj) 
        cout << "S" << '\n';
    else 
        cout << "N" << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
