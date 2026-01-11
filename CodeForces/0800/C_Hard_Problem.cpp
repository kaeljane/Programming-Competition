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
// 11/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m, a, b, c;
string s;

/* (mind) 
    seats - >> assentos
    2 linhas de assentos
    m         -> qt de assentos em cada linha
    a + b + c -> qt de macacos

    a -> linha 1
    b -> linha 2
    c -> nao tem preferencia

    somente 1 macaco pode sentar em cada assento

    ans = m*2 - rowOne - rowTwo

    
*/
void solve() {
    // cin>>n;
    cin>>m>>a>>b>>c;
    ll rowOne = m;
    ll rowTwo = m;

    rowOne -= a;
    rowTwo -= b;

    if (rowOne < 0) rowOne = 0;
    if (rowTwo < 0) rowTwo = 0;

    ll qtRestante = rowOne + rowTwo;

    qtRestante -= c;
    if (qtRestante < 0) qtRestante = 0;

    cout << m*2 - qtRestante << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}