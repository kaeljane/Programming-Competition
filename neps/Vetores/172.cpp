#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/* (mind)
    numero de figurinhas que falta para completar o album

*/

void solve() {
    ll n, x; cin>>n;
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }

    ll minimo = *min_element(all(v));
    ll maximo = *max_element(all(v));


    cout << maximo << "\n" << minimo << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
