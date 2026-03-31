#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 30/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, m;
string s, c;

/* (mind )
    ele quer que eu faça oq mesmo?

    imprimir o tamanho maximo de um subarray consistindo de valores iguais em todas as mesclagens

    Fazer em outro dia novamente, questão difícil, mas bonita

    1h e 17m e 9s


*/

void solve(){
    cin>>n;
    map<ll, ll> mapa;

    vl a(n);  for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    vl b(n);  for (ll i = 0; i < n; i++) {
        cin>>b[i];
    }

    vector<ll> max_a(2*n + 1, 0); // array de acumulados
    vector<ll> max_b(2*n + 1, 0);

    ll streak = 0;
    for (ll i = 0; i < n; i++) {
        if (i == 0 || a[i] == a[i-1]) { // vai ler a primeira parte da condicao primeiro
            streak++;
        }
        else {
            streak = 1;
        }
        max_a[a[i]] = max(max_a[a[i]], streak);
        
    }

    streak = 0;
    for (ll i = 0; i < n; i++) {
        if (i == 0 || b[i] == b[i-1]) {
            streak++;
        }
        else {
            streak = 1;
        }
        max_b[b[i]] = max(max_b[b[i]], streak);
    }


    ll ans = 0;
    for (ll i = 1; i <= 2*n; i++) {
        ans = max(ans, max_a[i] + max_b[i]);
    }

    cout << ans << el;


    
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}