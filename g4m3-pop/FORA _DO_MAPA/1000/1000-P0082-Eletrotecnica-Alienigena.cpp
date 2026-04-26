#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 26/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, caso = 1;
bool s, a, b, c, d, e, f, g, h, x, y, z;

/* (mind )
    and - quadrado
    or  - losango
    not - circulo

    38min 45sec

*/

void solve(){
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    if (a && b && c) x = true;
    else x = false;
    x = !x;
    if (x || !d) x = true;
    else x = false;
    x = !x;

    y = !d;

    if (e || f || g || h) z = true;
    else z = false;
    if (z && !d) z = true;
    else z = false;
    z = !z;

    
    cout << "Caso " <<caso<<": " << x << " " << y << " " << z << el;
    
    caso++;
}
signed main() {
    ___

    cin>>t;
    while(t--) 
    solve();

    return 0;
}