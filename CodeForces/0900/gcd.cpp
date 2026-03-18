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
// 12/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    
    cout << __gcd(10, 10-2) << el;   // 2
    cout << __gcd(10, 10-1) << el;   // 1
    cout << __gcd(10, 10) << el;     // 10
    cout << __gcd(10, 10+1) << el;   // 1
    cout << __gcd(10, 10+2) << el;   // 2
    cout << __gcd(10, 10+3) << el;   // 1
    cout << __gcd(10, 10+4) << el;   // 2
    cout << __gcd(10, 10+5) << el;   // 5
    cout << __gcd(10, 10+6) << el;   // 2
    cout << __gcd(10, 10+7) << el;   // 1
    cout << __gcd(10, 10+8) << el;   // 2
    cout << __gcd(10, 10+9) << el;   // 1
    cout << __gcd(10, 10+10) << el;  // 10

    cout << __gcd(1, 25) << el;      // 1
    cout << __gcd(1, 24) << el;      // 1
    cout << __gcd(1, 23) << el;      // 1
    cout << __gcd(0, 1) << el;       // 1
    cout << __gcd(0, 100) << el;     // 100
    
    cout << __gcd(3, 5) << el;       // 1
    cout << __gcd(-10, 2) << el;     // 2
    cout << __gcd(-20, 3) << el;     // 1
    cout << __gcd(0, 0) << el;       // 0 (em matemática é infinito)
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}