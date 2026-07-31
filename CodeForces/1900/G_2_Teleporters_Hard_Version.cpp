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
// 31/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, c;
string s, a, b;

/* (mind) 
    Time: 1h 1min 30sec
    Padrão: struct, fixing, prefix sums, busca binaria (upper bound)

    os detalhes vao me matar
    
*/

struct Portal {
    ll custoZero;
    ll custoMin;
};

bool cmp (Portal a, Portal b) {
    return a.custoMin < b.custoMin;
}

void solve() {
    cin>>n>>c;
    ans = 0;
    vector<Portal> v(n); 
    f (i, 1, n+1) {
        cin>>x;

        ll pos = i;

        // se for o primeiro portal visitado
        v[i-1].custoZero = x + pos; // parec como no primeiro codigo
        
        // custo mais barato possível
        // do inicio ou fim
        v[i-1].custoMin = x + min(pos, n + 1 - pos);

    }

    sort(all(v), cmp);
    
    vector<ll> pref (n + 1, 0);
    f (i, 1, n+1) {
        pref[i] = pref[i-1] + v[i-1].custoMin;
    }

    // testar todos os portais para ser o primeiro

    f (i, 0, n) {
        if (c < v[i].custoZero) continue;
        
        ll moedasSobrando = c - v[i].custoZero;

        // busca binária
        // upper_bound!!
        ll l = 0, r = n, qtComp = 0;
        // como era mesmo a upper bound manual... k.
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            ll custoMid = pref[mid];

            // doidera
            if (mid > i) {
                custoMid -= v[i].custoMin;
            }

            if (custoMid <= moedasSobrando) {
                if (mid > i) qtComp = mid - 1;
                else qtComp = mid;
                
                l = mid + 1;

            }
            else {
                r = mid - 1;
            }
        }
    
        ans = max(ans, qtComp + 1);
    }
    cout << ans << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}