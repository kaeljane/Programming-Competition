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
// 08/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    output -> a beleza minima e máxima possível
    
    como calcular a beleza?

    substituit dois elementos adjacentes do array pela sua soma.
        [3, (6, 9)] -> [3, 15]
        [(3, 6), 9] -> [9,  9] 

    x = 3  [4, 11, 6]
    a beleza é igual a 
        ceil(4/3) + ceil(11/3) + ceil(6/3) = 2 + 4 + 2 = 8

    vai sobrar so dois numeros no vector do beleza minima!!
*/
void solve() {
    cin>>n>>x;
    vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    
    // beleza maxima//////////////////////////
    ll belezaMaxima = 0;
    for (ll i = 0; i < n; i++) {
        belezaMaxima += (v[i] + x - 1)/x;
    }
    //////////////////////////////////////////

    // beleza minima//////////////////////////
    ll somaa = 0;
    for (ll i = 0; i < n; i++) {
        somaa += v[i];    
    }
    ll belezaMinima = (somaa + x - 1)/ x;
    //////////////////////////////////////////
    
    cout << belezaMinima << " " << belezaMaxima << el;
    


}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}