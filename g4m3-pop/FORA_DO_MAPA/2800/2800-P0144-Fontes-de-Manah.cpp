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
// 18/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 2e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, q, l, r;
string s, a, b, c;

/* (mind) 
    4h+ :( 
    Lazy Propagation + template do Joao
    
*/

ll ns[MAXN];
#define e(u) (u*2)
#define d(u) (e(u)+1)

struct Node {
    ll v = 0;

    Node operator+(const Node b) {
        return {v + b.v};
    }
};

struct SEG {
    Node seg[MAXN*4];
    ll lazy[MAXN*4];
    ll lim;

    void push(ll u, ll l, ll r) {
        if (lazy[u] != 0) {
            seg[u].v += lazy[u] * (r-l+1);

            if (l != r) {
                lazy[e(u)] += lazy[u];
                lazy[d(u)] += lazy[u];
            }
            lazy[u] = 0;
        }
    }

    void build(ll u, ll l, ll r) {
        lazy[u] = 0;

        if (l == r) {
            seg[u].v = ns[l];
        }
        else {
            const ll m = (l+r)/2;
            build(e(u), l, m);
            build(d(u), m+1, r);
            seg[u] = seg[e(u)] + seg[d(u)];
        }
    }

    void build(ll lim_) {
        lim = lim_;
        build(1, 0, lim);
    }
    
    
    void update(ll u, ll l, ll r, ll a, ll b, ll val) {
        push(u, l, r);
        
        if (l > r || l > b || r < a) return;
        
        if (a <= l && r <= b) {
            lazy[u] += val;
            push(u, l, r);
            return;
        }
        
        const ll m = (l+r)/2;
        update(e(u), l, m, a, b, val);
        update(d(u), m+1, r, a, b, val);
        
        seg[u] = seg[e(u)] + seg[d(u)];
    }
    
    void update(ll l, ll r, ll val) {
        update(1, 0, lim, l, r, val);
    }

    Node query(ll u, ll l, ll r, ll a, ll b) {
        push(u, l, r);
        if (l > r || l > b ||r < a) return Node();

        if (a <= l && r <= b) return seg[u];

        const ll m = (l+r)/2;
        return query(e(u), l, m, a, b) + query(d(u), m+1, r, a, b);
    }

    Node query(ll l, ll r) {
        return query(1, 0, lim, l, r);
    }
} seg;


void solve() {
    cin>>n>>q;
    seg.build(n-1); 
    vl v(n); for (ll i = 0; i < n; i++) cin>>v[i];
    
    f (i, 0, q) {
        cin>>l>>r>>k; l--; r--;
        seg.update(l, r, k);
    }

    ll maiorDia = -INF;

    f (i, 0, n) {
        // ver o maior
        if (seg.query(i, i).v == 0) {
            cout << "INF" << el;
            return;
        }
        else {
            maiorDia = max(maiorDia, (v[i] + seg.query(i, i).v - 1) / seg.query(i, i).v); // arredondando para cima        
        } 
    }
    cout << maiorDia << el;

}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}