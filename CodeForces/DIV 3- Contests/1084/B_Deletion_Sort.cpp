#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 31/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    determine o numero mínimo possível de elementos que podem restar no array após o jogo
    terminar

    
*/

void solve(){
    cin>>n;
    vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];

    if (n == 1) {
        cout << 1 << el;
        return;
    }

    vl vBack = v;
    sort(all(vBack));

    if (vBack == v) {
        cout << n << el;
        return;       
    }

    cout << 1 << el;


}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}