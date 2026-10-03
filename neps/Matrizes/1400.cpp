#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*


*/


void solve() {
    ll l, c, n, x; cin>>l>>c>>n;

    for (ll k = 0; k < n; k++) {
        
        vector<vector<ll>> mat(l, vector<ll>(c, 0));
        ll qtAri = 0, qtAne = 0;
        for (ll i = 0; i < l; i++) {
            for (ll j = 0; j < c; j++) {
                cin>>x;
                if (x) qtAne++;
                else qtAri++;
            }
        }
        if (qtAne == qtAri) cout << "Empate" << '\n';
        else if (qtAne > qtAri) cout << "Ane venceu" << '\n';
        else cout << "Ari venceu" << '\n';

    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

  
    return 0;
}