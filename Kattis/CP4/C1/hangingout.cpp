#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll l, n, x, qtAtual = 0, limGroups = 0; cin>>l>>n;
    string s;
    for (ll i = 0; i < n; i++) {
        cin>>s>>x;
        if (s == "enter") {
            if (x + qtAtual > l) {
                limGroups++;
            }
            else {
                qtAtual += x;
            }
        }
        else {
            qtAtual -= x;
        }
    }

    cout << limGroups << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}