#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*

    teste
    teste
    

*/


void solve() {
    ll n, x; cin>>n;

    set<ll> cj;

    map<ll, ll> div;

    for (ll i = 0; i < n; i++) {
        cin>>x; cj.insert(x);
    }

    for (auto &x : cj) {
        
        // passando map
        bool b1 = 0;
        for (auto &y : div) {
            if (x % y.first == 0) {
                y.second++;
                b1 = 1;
                break;
            }
        }
        if (!b1) {
            div[x]++;
        }
    }

    cout << div.size() - 1 << '\n';



}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

  
    return 0;
}