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
// 25/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, a, b, c;
string s;

/* (mind) 
    é possivel transformar em uma PA?

    // para o c
    a = x1, b = x1 + d
    b - a = x1 + d - x1 = d
    c = x1 + 2d = a + 2d
    (a + 2d) % c == 0:

    // para b
    a = x1, c = x1 + 2*d;

    c = x3 - x1 = 2*d / 2 = d temos que dividir por dois
    b = a + d

    // para a
    a = x1
    b = x1 + d
    x = x1 + 2d

    b - (c-b) = a

    is crazy

*/
void solve() {
    cin>>a>>b>>c;
    ll d1 = b - a;
    ll d2 = (c - a) / 2;
    ll d3 = c - b;
    
    ll novoC = a + 2*d1;
    ll novoB = a + d2;
    ll novoA = b - d3; 
    if (novoA % a == 0 && novoA != 0 && novoA >= a) {
        cout << "YES" << el;
    }
    else if (novoB % b == 0 && novoB != 0 && (c - a) % 2 == 0 && novoB >= b) {
        cout << "YES" << el; 
    }
    else if (novoC % c == 0 && novoC != 0 && novoC >= c) {
        cout << "YES" << el;
    }
    else {
        cout << "NO" << el;
    }
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}