#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 25/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, k;
string s, a, b, c;

/* (mind )
    uma tocha pode ser fabricando usando um carvao

    - trocar 1 graveto por x gravetos (você perde 1 graveto e ganha x gravetos).
    - trocar y gravetos por 1 carvão (você perde y gravetos e ganha 1 carvão)

    x -> numero de gravetos que vc ganha ao vender um graveto
    y -> numero de gravetos necessários para comprar um carvão.
    k -> numero de tochas que você precisa

    18m 08s
    6m 0s


*/
void solve() {
    cin>>x>>y>>k;

    ll num = k*y + k - 1;
    ll den = x - 1; // lucro vai comprar x mas vai dar 1 em troca

    cout << (num + den - 1) / den + k << el;


}

void solve1(){
    cin>>x>>y>>k;
    ll qtDeCarvaoQuePrecisamos = k;
    ll trocarGravetosPorCarvao = k * y;
    ll gravetosNecessariosMontarTochas = k;
    ll qtDeGravetosNecessarios = (k*y) + k; // retirar 1 pq ja começa em 1

    ll ans = ceil((long double)(qtDeGravetosNecessarios -1) / (long double)(x - 1));

    cout << ans + k << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}