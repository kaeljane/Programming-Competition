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
// 18/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    Escolher um subsegmento deste array e rotacioná-lo ciclicamente por qualquer quantia

    escolher dois inteiros l e r
    e qualquer inteiro positivo k

    maximizar (an - a1)

    determine o valor maximo de (an - a1)

    erro no teste 2

    ! fazendo a operacao uma vez
    o valor maximo

    DOIDERA
    VOU ENDOIDAR!!!!

    
*/
void solve() { 
    cin>>n;
    vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    

    ll ans = -INF;

    ans = max(ans, v[n-1] - v[0]);
    
    for (ll i = 1; i < n; i++) {
        ans = max(ans, v[i] - v[0]);
    }

    for (ll i = 0; i < n-1; i++) {
        ans = max(ans, v[n-1] - v[i]);
    }

    for (ll i = 0; i < n-1; i++) {
        ans = max(ans, v[i] - v[i+1]);
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