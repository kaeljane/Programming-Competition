// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 06/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
map<ll, int> factors;

ll mulmod(ll a, ll b, ll m) {
    ll res = 0;
    a %= m;
    while (b > 0) {
        if (b % 2 == 1) res = (res + a) % m;
        a = (a * 2) % m;
        b /= 2;
    }
    return res;
}

ll binPow(ll base, ll e, ll mod) {
    ll result = 1;
    base %= mod;
    while (e) {
        if (e & 1) result = mulmod(result, base, mod);
        base = mulmod(base, base, mod);
        e >>= 1;
    }
    return result;
}

bool checkComposite(ll n, ll a, ll d, int s) {
    ll x = binPow(a, d, n);
    if (x == 1|| x == n - 1) return false;
    for (int r = 1; r < s; r++) {
        x = mulmod(x, x, n);
        if (x == n - 1) return false;
    }
    return true;
}

bool isPrime(ll n) {
    if (n < 2) return false;
    int s = 0;
    ll d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }
    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a) return true;
        if (checkComposite(n, a, d, s)) return false;
    }
    return true;
}

ll pollard_rho(ll n) {
    if (n % 2 == 0) return 2;
    ll x = 2, y = 2, d = 1, c = 1;

    auto f = [&](ll x) {
        return (mulmod(x, x, n) + x) % n;
    };

    while (d == 1) {
        x = f(x);
        y = f(f(y));

        ll val = (x > y) ? (x - y) : (y - x);
        d = __gcd(val, n);

        if (d == n) {
            ll big_rand = (ll)rand() * rand();
            x = big_rand % (n - 2) + 2;
            y = x;
            x = big_rand % (n - 1) + 1;
            d = 1;
        }
    }
    return d;
}

void factorize(ll n) {
    if (n == 1) return;
    if (isPrime(n)) {
        factors[n]++;
        return;
    }
    ll divisor = pollard_rho(n);
    factorize(divisor);
    factorize(n / divisor);
}

void solve() {
    while (cin>>n){
        if (n == 0) {
            return;
        }
        factors.clear();
        factorize(n);

        for (auto x : factors) {
            cout << x.first << "^" << x.second << " ";
        }
        cout << el;
    }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    srand(time(0));
    solve();
    
    return 0;
}