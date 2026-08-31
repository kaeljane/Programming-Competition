// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
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
// 31/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 10min 42sec
    Padrão: geometria basica
    S:
        dados dois retangulos, testar se eles colidem perfeitamente
        
*/
void solve() {
    ll x1, y11, x2, y2, x3, y3, x4, y4;
    cin>>x1>>y11>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;

    set<pair<ll, ll>> q1;
    set<pair<ll, ll>> q2;
    
    f (i, x1, x2+1) {
        f (j, y11, y2+1) {
            q1.insert({i, j});
        }
    }

    f (i, x3, x4+1) {
        f (j, y3, y4+1) {
            q2.insert({i, j});
        }
    }

    for (auto &x : q2) {
        if (q1.count(x)) {
            cout << "TRUE" << el;
            return;
        }
    }

    cout << "FALSE" << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}