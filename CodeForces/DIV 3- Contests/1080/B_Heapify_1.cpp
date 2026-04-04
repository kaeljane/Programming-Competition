#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 03/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    pensei so na logica inicial ;-;
    nao afoba testa tudo que for possivel
    nao envia sem analisar!!!!!!!!!!@!!!!!W!!!Q
    treina a respiracao

    ;-; ;-; ;-; ;-; ;-; ;-; ;-; ;-; ;-; ;-; ;-; ;-;

*/

void solve(){
    cin>>n;
    
    vector<ll> v(n+1, 0);
    for (ll i = 1; i <= n; i++) {
        cin>>v[i];
    }

    for (ll i = 1; i <= n; i++) {
        ll num = v[i];
        ll idx = i;

        while (num % 2 == 0) {
            num /= 2;
        }

        while (idx % 2 == 0) {
            idx /= 2;
        }

        if (num != idx) {
            cout << "NO" << el;
            return;
        }
    }
    

    cout << "YES" << el;


}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}