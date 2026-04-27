#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 26/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, ans = 0;
string s, a, b, c;
vl v;

/* (mind )
    n palavras chaves
    xor (bit a bit) der zero!
    numeros iguais -> 0
    -> backtracking focado em subconjuntos
    -> anotar o valor atual do xor
    Usado template de backtrack focado em subconjuntos!

    Preciso treinar muitoooooo maaaaisssssssss

    43min 20sec

*/

void backtrack(ll idx, ll acumulado, ll qt) { // qt -> numero de elemntos que foi pego
    // parada
    if (idx == n) { 
        if (acumulado == 0) {
            ans = max(ans, qt);
        }

        return; // fim da linha do tempo
    }
    
    // logica 
    backtrack(idx + 1, acumulado, qt); // andando uma posicao no vector e nao pegando nenhum item

    backtrack(idx + 1, acumulado ^ v[idx], qt + 1);


}

void solve(){
    cin>>n;
    for (ll i = 0; i < n; i++) {
        cin>>x;
        v.push_back(x);
    }

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