#include <bits/stdc++.h>

#define int long long
#define ld long double
#define pb push_back
#define eb emplace_back
#define is insert
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define f(i,b,e) for(int i = (b); i < (e); ++i)
#define rf(i,b,e) for(int i = (b); i >= (e); --i)
#define fa(i,a) for(auto i : (a))
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define mkp make_pair

#define debug(x) cerr << #x << " = " << (x) << endl;

using namespace std;

bool all_test = 0;

const int MAXN = 4e6 + 1, MOD = 1e9 + 7, MODW = 998244353, inf = 1ll << 60;

using pii = pair<int,int>;

set<int> primes;

struct P {
    int x_mi, x_ma, y_mi, y_ma;
};

void sieve() {
    vector<bool> is_prime(MAXN, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXN; j += i) is_prime[j] = false;
        }
    }

    f(i, 2, MAXN) {
        if (is_prime[i]) primes.insert(i); 
    }
}

int cost(P &a, P &b) {
    int xd1 = abs(a.x_mi - a.x_ma), yd1 = abs(a.y_mi - a.y_ma);
    int a1 = *primes.lower_bound(xd1);
    int b1 = *primes.lower_bound(yd1);
    int xd2 = abs(b.x_mi - b.x_ma), yd2 = abs(b.y_mi - b.y_ma);
    int a2 = *primes.lower_bound(xd2);
    int b2 = *primes.lower_bound(yd2);
    return 2 * (a1 + a2 + b1 + b2);
}

void solve() {
    sieve();
    int n; 
    if (!(cin >> n)) return; 
    vector<pii> pnts;
    f(i,0,n) {
        int x, y; cin >> x >> y;
        pnts.pb({x,y});
    }

    sort(all(pnts));

    multiset<int> xl, yl, xr, yr;

    xl.insert(pnts[0].fi), yl.insert(pnts[0].se);
    xl.insert(pnts[1].fi), yl.insert(pnts[1].se);
    f(i,3,n) {
        xr.insert(pnts[i].fi);
        yr.insert(pnts[i].se);
    }

    int ans = inf;
    f(i,2,n - 2) {
        P left = {*xl.begin(), *xl.rbegin(), *yl.begin(), *yl.rbegin()};
        P right = {*xr.begin(), *xr.rbegin(), *yr.begin(), *yr.rbegin()};

        ans = min(ans, cost(left, right));

        int x = pnts[i].fi, y = pnts[i].se;
        xl.insert(x); yl.insert(y);

        xr.erase(xr.find(pnts[i + 1].fi));
        yr.erase(yr.find(pnts[i + 1].se));
    }
    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int tc = 1;
    if (all_test) cin >> tc;
    while (tc--) solve();
    return 0;
}