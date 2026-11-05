#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 27/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, m, ans = 0;
string s, a, b, c;
vl v;

/* (mind )
    distribuir toda a riqueza que acumulou em seus anos de magico
    ele montou uma fila
    por pessoa montou N pilhas com x de ouro em cada uma

    escolher m pilhas.

    pegar o máximo de ouro de arizubal

    15min 52sec

*/

void backtrack(ll idx, ll acumulado, ll qt) {
    if (idx == n) {
        if (qt == m) {
            ans = max(ans, acumulado);
        }
        return;
    }

    backtrack(idx + 1, acumulado, qt);
    backtrack(idx + 1, acumulado ^ v[idx], qt + 1);
}

void solve(){
    cin>>n>>m;
    v.assign(n, 0);
    for (ll i = 0; i < n; i++) cin>>v[i];
    
    backtrack(0, 0, 0);
    
    cout << ans << el;
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}