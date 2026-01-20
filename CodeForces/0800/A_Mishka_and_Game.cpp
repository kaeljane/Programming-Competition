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
// 19/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m, c;
string s, a, b;

/* (mind) 
    n -> numero de rounds
    mi e ci -> valores na face superior dos dados após os lançamentos de Mishka e Chris na i-ésima rodada, respectivamente
    
    TC 1
        m = 9 c = 8
    TC 2
        m = 7 c = 7
    TC 3
        m = 
    
        26 | 28
*/
void solve() {
    cin>>n;
    // vl v(n);
    m = 0;
    c = 0;
    for (ll i = 0; i < n; i++) {
        cin>>x>>y; 
        if (x > y) m++;
        else if (x == y) {m++; c++;}
        else c++;
    }

    if (m > c) cout << "Mishka" << el;
    else if (m == c) cout << "Friendship is magic!^^" << el;
    else cout << "Chris" << el;    
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}