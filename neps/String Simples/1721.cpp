#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    
*/

void solve() {
    string s; char c;
    ll qtTotal = 0, qtP = 0;
    cin>>c;
    while (cin>>s) {
        for (ll i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                qtP++;
                break;
            }
        }
        qtTotal++;
    }
    
    long double calc =  (double)qtP / qtTotal * 100;

    cout << fixed << setprecision(1) << calc << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
