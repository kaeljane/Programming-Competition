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
// 18/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, X1, Y1, X2, Y2, X3, Y3, X4, Y4;
string s, a, b, c;

/* (mind) 
    58m 28s
    
*/

bool colidiu (ll x, ll y, ll xEsq, ll yInf, ll xDir, ll ySup) {
    if (x >=  xEsq && x <= xDir && y >= yInf && y <= ySup) {
        return true;
    }
    return false;
}

void solve() {
    n = 4;
    cin>>X1>>Y1;
    cin>>X2>>Y2;
    cin>>X3>>Y3;
    cin>>X4>>Y4;

    bool ans = false;

    // ret 1
    if (colidiu(X1, Y1, X3, Y3, X4, Y4)) ans = true;
    if (colidiu(X2, Y1, X3, Y3, X4, Y4)) ans = true;
    if (colidiu(X1, Y2, X3, Y3, X4, Y4)) ans = true;
    if (colidiu(X2, Y2, X3, Y3, X4, Y4)) ans = true;
    
    // ret 2
    if (colidiu(X3, Y3, X1, Y1, X2, Y2)) ans = true;
    if (colidiu(X4, Y3, X1, Y1, X2, Y2)) ans = true;
    if (colidiu(X3, Y4, X1, Y1, X2, Y2)) ans = true;
    if (colidiu(X4, Y4, X1, Y1, X2, Y2)) ans = true;
    
    
    cout << (ans ? "TRUE" : "FALSE" ) << el;

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}