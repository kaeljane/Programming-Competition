#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
 
/*
    
*/
 
void solve() {
    ll n, k, q; cin>>n>>k>>q;
 
    vector<ll> dist = {0};
    vector<ll> minutos = {0};
    
    ll y;
    for (ll i = 1; i <= k; i++) {
        cin>>y;
        dist.push_back(y);
    }
    for (ll i = 1; i <= k; i++) {
        cin>>y;
        minutos.push_back(y);
    }
    
    ll x;
    for (ll i = 0; i < q; i++) {
        cin>>x;
        if (x == 0) {
            cout << 0 << ' '; 
            continue;
        }
 
        auto f = lower_bound(all(dist), x);
        ll idxF = f - dist.begin();
 
        if (dist[idxF] == x) {
            cout << minutos[idxF] << " ";
            continue;
        }
        
        ll idxI = idxF - 1;
 
        ll distancia = dist[idxF] - dist[idxI];
        ll tempo = minutos[idxF] - minutos[idxI];

        ll resp = minutos[idxI] + (x - dist[idxI]) * tempo / distancia;
 
        cout << resp << " ";
        
    }
    cout << '\n';
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();
 
    return 0;
}