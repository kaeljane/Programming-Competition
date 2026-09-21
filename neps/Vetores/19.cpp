#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    ll n; cin>>n; 
    ll x; char c;
    vector<pair<ll, char>> v;

    for (ll i = 0; i < n; i++) {
        cin>>x>>c;
        v.push_back({x, c});
    }
    ll qt = 0;
    for (ll i = 0; i < n; i++) {
        char queroAchar;

        if (v[i].second == 'D') {
            queroAchar = 'E';
        }
        else {
            queroAchar = 'D';
        }

        for (ll j = i+1; j < n; j++) {
            if (v[i].first == v[j].first && v[j].second == queroAchar) {
                v[i] = {0, '0'};
                v[j] = {0, '0'};
                qt++;
            }
        }
    }


    cout << qt << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
