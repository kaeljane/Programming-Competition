#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    usar set

    L se posiciona no metro x e apaga o primeiro foco
    de incendio a sua esquerda. Caso nao haja nenhum foco 
    ate a base nada acontece

        [0, L]




*/


void solve() {
    ll n, c, x; cin>>n>>c;
    set<ll> cj; // campo de futebol n+1 [0, n]
    // cj contem focos de incendio
    char op;
    for (ll i = 0; i < c; i++) {
        cin>>op>>x;

        if (op == 'S') {
            cj.insert(x); 
        }
        else if (op == 'L') {
            auto it = cj.upper_bound(x); // maior que x sempre
            
            if (it != cj.begin()) {
                it--;
                cout << "APAGOU " << (*it) << '\n';
                cj.erase(it);
            }
            
        }
        else if (op == 'R') {
            auto it = cj.lower_bound(x);
            if (it != cj.end()) {
                cout << "APAGOU " << (*it) << '\n';
                cj.erase(it);
                
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

  
    return 0;
}