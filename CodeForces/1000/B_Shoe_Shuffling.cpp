#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 02/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    47min 17sec
    se tiver so um valor sozinho nao vai dar certo
*/

void solve(){
    cin>>n;
    set<ll> conj; 
    vector<pair<ll, ll>> sapatos;
    map<ll, ll> mapa;

    vl v(n);  for (ll i = 0; i < n; i++) {
        cin>>v[i];
        conj.insert(v[i]);
        sapatos.push_back({v[i], i+1});
        mapa[v[i]]++;
    }

    for (auto &x : mapa) {
        if (x.second == 1) {
            cout << -1 << el;
            return;
        }
    }

    if (conj.size() == 1) {
        cout << n << " ";
        for (ll i = 1; i < n; i++) {
            cout << i << " ";
        }
        cout << el;
    }
    else if (conj.size() == n) {
        cout << -1 << el;
    }
    else {
        for (ll i = 0; i < n-1; i++) {
            if (v[i] == v[i+1]) {
                swap(sapatos[i].second, sapatos[i+1].second);
            }
        }
        ll i = 1;
        for (auto &x : sapatos) {
            if (x.second == i) {
                cout << -1 << el;
                return;
            } 
            i++;
        }
        for (auto &x : sapatos) {
            cout << x.second << " ";
        }
        cout << el;

    }
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}