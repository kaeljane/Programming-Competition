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

ll n, t, k, x, y, z, a, b, c;
string s;

/* (mind) 
    a - valor maximo do cronometro da bomba
    b - o valor inicial do cronometro
    n - numero de ferramentas
    
    precisa atrasar a explosao pelo maior tempo possivel
    pode usar uma vez 
    se o cronometro for alterado para um (inteiro maior que a)  ele será definido como a devido a um bug.

    ATRASAR A BOMBA!!!
*/
void solve() {
    cin>>a>>b>>n;

    ll somaT = b;
    for (ll i = 0; i < n; i++) {
        cin>>x;
        somaT += min(x, a-1);
    }

    cout << somaT << el;
    

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}