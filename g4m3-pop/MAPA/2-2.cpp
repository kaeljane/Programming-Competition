#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 22/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind)
    conteudo de string avancado
    47m 14s

    VIAJEIIIIIIIIII, ERA OQ EU TINHA PENSADO DESDE O INICIO

*/

void solve(){
    cin>>n;
    cin.ignore();
    ll ans = 0;
    
    while(n--){
        getline(cin, s);
        for (char &letra : s) {
            if (letra >= 'A' && letra <= 'Z') {
                letra = letra + 32;
            }
        }

        if (s.find("fada") != string::npos) {
            ans++;
        }
        
    }

    cout << ans << el;
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}