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

ll n, t, l, x, y, z;
string s, b, c;
char a;

/* (mind )
    pegar o pior cenário para ter a garantia matemática    
    57m 23s

    a regra do problema diz que você atravessa a rua imediatamente assim que a luz verde (g) aparecer.
    a gente quer sabber a distancia de cada a até o primeiro g que aparecer na frente dele
*/

void solve(){
    cin>>n>>a>>s;
    if (a == s[0] && n == 1) {
        cout << 0 << el;
        return;
    }
    ll ansMaximo = -INF;
    s += s;

    n = s.size();

    ll ultimoG;
    bool achouG = false;
    for (ll i = n - 1; i >= 0; i--) {
        if (s[i] == 'g') {
            ultimoG = i;
            achouG = true;
        }
        if (s[i] == a && achouG) {
            ansMaximo = max(ansMaximo, ultimoG - i);
        }
    }

    cout << ansMaximo << el;
    
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}