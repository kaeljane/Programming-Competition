#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/* (mind)
    numero de figurinhas carimbadas que falta para
    completar o álbum

    n -> num de fig e espaços
    c -> num de fig carimbadas do album
    M -> num de fig compradas

    figurinhas carimbadas sao figurinhas raras


*/

void solve() {
    ll n, c, m, x; cin>>n>>c>>m;
    
    vector<ll> carimb(c);
    vector<ll> album(n + 1);
    
    for (ll i = 0; i < c; i++) {
        cin>>carimb[i];
    }
    
    for (ll i = 0; i < m; i++) {
        cin>>x;
        album[x]++;
    }
    
    ll qtFalta = 0;

    for (ll i = 0; i < c; i++) {
        if (!album[carimb[i]]) {
            qtFalta++;
        }
    }

    cout << qtFalta << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
