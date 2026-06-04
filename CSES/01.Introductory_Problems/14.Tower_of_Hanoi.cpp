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
// 03/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    tres pilhas!!

    
*/
// de_onde       = 1
// para_onde     = 3
// pino_ajudante = 2
void hanoi(ll n, ll de_onde, ll para_onde, ll pino_ajudante) {
    if (n == 0) return;
    
    hanoi(n-1, de_onde, pino_ajudante, para_onde);

    cout << de_onde << " " << para_onde << el;

    hanoi(n - 1, pino_ajudante, para_onde, de_onde);

}

void solve() {
    cin>>n;
    // numero de movimentos matemáticamente: 2^n - 1.
    cout << (1 << n) - 1 << el;
    
    hanoi(n, 1, 3, 2);
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}