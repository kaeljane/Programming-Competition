#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/
ll cases = 1;
void solve() {
    string s; ll v;
    vector<pair<string, ll>> pares(10);
    ll maxx = 0;
    
    for (ll i = 0; i < 10; i++) {
        cin>>s>>v;
        pares[i] = {s, v};
        maxx = max(maxx, v);
    }
    cout << "Case #" << cases << ":" << '\n';
    for (ll i = 0; i < 10; i++) {
        if (pares[i].second == maxx) {
            cout << pares[i].first << '\n';
        }
    }

    cases++;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}