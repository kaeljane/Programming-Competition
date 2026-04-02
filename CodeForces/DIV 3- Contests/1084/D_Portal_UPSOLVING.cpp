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

/* (mind )
    mil horas depois
    
    5 1 3
    1 | 3 5 | 2 4 
    0   1 2   3 4


*/

void solve(){
    cin>>n>>x>>y;
    vl v(n);  for (ll i = 0; i < n; i++) cin>>v[i];

    vector<ll> miolo;
    vector<ll> fixo;
    
    for (ll i = 0; i < n; i++) {
        // miolo
        if (i >= min(x, y) && i < max(x, y)) {
            miolo.push_back(v[i]);
        }
        else {
            fixo.push_back(v[i]);
        }
    }
    
    auto it = min_element(all(miolo));

    ll idxMin = it - miolo.begin();

    ll tamMiolo = miolo.size();

    vector<ll> mioloAux;
    for (ll i = idxMin; i < tamMiolo; i++) {
        mioloAux.push_back(miolo[i]);
    }

    for (ll i = 0; i < idxMin; i++) {
        mioloAux.push_back(miolo[i]);
    }

    ll menor = *it;

    ll tamFixo = fixo.size();
    bool achou = false;
    if (tamFixo == 0) {
        for (ll j = 0; j < tamMiolo; j++) {
            cout << mioloAux[j] << " ";
        }
        cout << el;
        return;
    }

    for (ll i = 0; i < tamFixo; i++) {

        if (fixo[i] > menor && !achou) {
            achou = true;
            for (ll j = 0; j < tamMiolo; j++) {
                cout << mioloAux[j] << " ";
            }
        }
        cout << fixo[i] << " ";
    }
    
    if (!achou) {
        for (ll j = 0; j < tamMiolo; j++) {
            cout << mioloAux[j] << " ";
        }
    }

    cout << el;



    
    
    // passo 2 fixo
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}