 // ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define f(i,b,e) for (ll i = (b); i < (e); i++)
#define rf(i,b,e) for (ll i = (b); i >= (e); i--)
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define uset unordered_set
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 09/03/2026 by Kaeljane
using namespace std;


ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind)

    Você precisa encontrar o número mínimo de operações necessárias para
    (obter uma cópia onde todos os elementos sejam iguais).

    - escolher qualquer array e cloná-lo.
    - trocar dois elementos de quaisquer duas cópias (talvez na mesma copia) em qualquer posicao

    1 Oper -> Clonar um array inteiro (custa 1 operacao)
    2 Oper -> Trocar um único elemento de lugar com outro (custa 1 operacao por elemento trocado)

    Brute force parece que nao dará certo.
    

*/


void solve() {
    cin>>n;
    vl v(n);
    map<ll, ll> mapa;
    
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
        mapa[v[i]]++;
    }

    if (mapa.size() == 1) {
        cout << 0 << el;
        return;

    }
    
    ll frequente = 0; //
    ll operacao = 0;
    
    for (auto &m : mapa) { // esta correto
        frequente = max(frequente, m.second);
    }
    
    // cout << frequente << el;
    ll qt;
    while (true) {
        if (frequente == n) {
            cout << operacao << el;
            return;
        }
        if (frequente * 2 > n) {
            qt = n - frequente; // oq falta para todos se transformarem em n
            frequente += qt;
            operacao += qt + 1;
        }
        else {
            // ainda da para dobrar (talvez)
            operacao += frequente + 1;
            frequente *= 2;
            
        }
    }

   


}


signed main() {

    ___

    cin>>t;
    while(t--)
    solve();

    return 0;


} 