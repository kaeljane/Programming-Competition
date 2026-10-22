#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, k; cin>>n;
    string s, nomeRestaurante;

    for (ll i = 0; i < n; i++) {
        cin>>k; cin.ignore();

        getline(cin, nomeRestaurante);
        set<string> cj;
        
        for (ll j = 0; j < k; j++) {
            getline(cin, s);
            cj.insert(s);
        }
        if (cj.count("pea soup") && cj.count("pancakes")) {
            cout << nomeRestaurante << '\n';
            return;
        }

        cj.clear();

    }

    cout << "Anywhere is fine I guess" << '\n';



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}