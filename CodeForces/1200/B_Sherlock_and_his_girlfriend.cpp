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
// 29/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 8min 15sec
    Padrão: teoria dos numeros basica

    um numero primo nao pode ter a mesma cor que um 
    numero composto.

    2 3 4 5
    
*/

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    
    if (n % 2 == 0) return false;
    
    for (ll i = 3; i * i <= n; i+=2) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    cin>>n;
    bool b1 = 0, b2 = 0;
    vector<ll> anss;
    f (i, 2, n+2) {
        if (isPrime(i)) {
            anss.pb(1);
            b1 = 1;
        }
        else {anss.pb(2); b2 = 1;}
    } 

    if (b1 && !b2 || (!b1 && b2)) {
        cout << 1 << el;
    }
    else {
        cout << 2 << el;
    }

    for (auto &x : anss) cout << x << " ";
    cout << el;
    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}