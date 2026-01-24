// ------------ Discipline is remembering who you said you wanted to be^^ ------------
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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 24/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    a -> Allice moedas
    b -> Barbara moedas
    c -> Cerene moedas
    n -> Numero de moedas de polycarpo

    0 -> ana
    1 -> barbara
    2 -> cerene

    nao pode deixar restos
    os numeros precisam ser iguais

*/
void solve() {
    vl v(3);
    cin>>v[0]>>v[1]>>v[2]>>n;
    
    auto it = max_element(all(v));

    ll idx = it - v.begin();

    for (ll i = 0; i < 3; i++) {
        if (i != idx) {
            // 5 - 3 = 2 tira 2 de n
            n -= *it - v[i];
            v[i] = *it;
        }
        if (n < 0) {
            cout << "NO" << el;
            return;
        }
    }
    // caso tenha deixado tudo com o mesmo valor
    // dividir o restante por 3 nao pode deixar resto acredito
    if (n % 3 == 0) cout << "YES" << el;
    else cout << "NO" << el;

    

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}