#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 25/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, m;
string s, a, b, c;

/* (mind )
    49min 3sec
*/

void solve(){
    cin>>m>>n;
    vector<pair<ll, ll>> v(n); 
    set<pair<ll, ll>> conj;
    for (ll i = 0; i < n; i++) {
        cin>>x>>y;
        v[i] = {x, y};
        conj.insert({x, y});
    }
    bool ans = true;
    
    if (conj.size() == n) {
        for (ll i = 0; i < m; i++) {
            for (ll j = 0; j < m; j++) {
                ll qt = 0;
                for (ll k = 0; k < n; k++) { // procurando elem no vector
                    if (v[k].first == i-1 && v[k].second == j ||
                        v[k].first == i && v[k].second == j-1 ||
                        v[k].first == i+1 && v[k].second == j ||
                        v[k].first == i && v[k].second == j+1 ||
                        v[k].first == i-1 && v[k].second == j-1 ||
                        v[k].first == i+1 && v[k].second == j-1 ||
                        v[k].first == i+1 && v[k].second == j+1 ||
                        v[k].first == i-1 && v[k].second == j+1
                    ) qt++;
                    
                    if (qt > 4) {
                        ans = false;
                        cout << "False" << el;
                        return;
                    }
                }
            }
        }
        cout << "True" << el;
    }
    else {
        cout << "False" << el;
    }
    
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}