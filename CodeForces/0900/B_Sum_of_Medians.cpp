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
// 07/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    numero que está na posicao ceil(n/2) que está em sorting
    
    2, 6, 4, 1, 3, 5 -> [1, 2, [3], 4, 5, 6] COLOCOU EM ORDEM!!!

    -> 6/2 = 3

    n e k
    array (ordenado)

    dividir todos os numeros em k arrays de tamanho n
    cada numero precisa pertencer a um array

    A soma das medianas de todos os k arrays seja a máxima possível. Encontre essa soma máxima.




*/
void solve() {
    cin>>n>>k;
    ll tam = n*k;
    vl v(tam); 
    for (ll i = 0; i < tam; i++) cin>>v[i];
    
    // variaveis e tals//////////////
    ll ans = 0;
    ll vezes = 0;
    ll gruposFormados = 0;
    ll mediana = ceil((double)n/2.0);
    ll r = 0;
    /////////////////////////////////

    // logica ///////////////////////////
    for (ll i = tam - 1; i >= 0; i--) {
        // pego o valor
        if (gruposFormados == k) break; 

        if (vezes == mediana) {
            ans += v[i];
            gruposFormados++;
            vezes = 0;
        }
        else {
            vezes++;
            if (n&1 && vezes == mediana) {
                ans += v[i];
                gruposFormados++;
                vezes = 0;
            }
        }

    }
    ////////////////////////////////////

    cout << ans << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}