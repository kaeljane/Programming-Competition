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
// Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

template<class T1,class T2>ostream& operator<<(ostream& out,const pair<T1,T2>& v){
    return out<<'('<<v.first<<','<<v.second<<')';
}

template<class C>auto operator<<(ostream& out,const C& v)->decltype(
    v.begin(),v.end(),
    typename enable_if<!is_convertible<C,string>::value>::type(),out){
    out<<"[ ";
    for(const auto& y:v)
        out<<y<<" ";
    return out<<"]";
}

template<class T,class... A>void _dbg(const char* s,const T& x,const A&... r){
    int b=0;
    while(*s&&(*s!=','||b)){
        b+=(*s=='('||*s=='['||*s=='{')-(*s==')'||*s==']'||*s=='}');
        cerr<<*s++;
    }
    cerr<<"="<<x;
    if constexpr(sizeof...(r)){
        cerr<<" "; _dbg(s+1+(s[1]==' '),r...);
    } else cerr<<"\n";
}

#define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)

const int MAX = 2e5+5; 
 
int ns[MAX];
 
#define e(u) (u*2) 
#define d(u) (e(u)+1)  
#define out (l > r || l > b || r < a)
#define in (a <= l && r <= b)

struct Node {
    long long v = LLONG_MAX; //
    ll cnt = 0; //
 
    Node operator+(const Node b) {
        if (v < b.v) return {v, cnt}; //
        if (v > b.v) return {b.v, b.cnt}; //
        return {v, cnt + b.cnt}; // empate
    }
};
 
struct SEG {
    Node seg[MAX*4];
    int lim;
 
    void build(int u, int l, int r) {
        if(l == r) { 
                seg[u].v = ns[l]; 
                seg[u].cnt = 1; //
            } 
            else {
                const int m = (l+r)/2;
                build(e(u), l, m), build(d(u), m+1, r);
                seg[u] = seg[e(u)] + seg[d(u)];
            }
    }
 
    void build(int lim_) {
        lim = lim_; 
        build(1, 0,lim);
    }
 
    void update(int u, int l, int r, int a, ll b) {
        if(l == r) { 
            seg[u].v = b; 
            seg[u].cnt = 1; //
            return;
        }
        const int m = (l+r)/2;
        if(a <= m) update(e(u), l, m, a, b);
        else update(d(u), m+1, r, a, b);
        seg[u] = seg[e(u)] + seg[d(u)];
    }
    
    void update(int pos, ll newv) { 
        update(1, 0,lim, pos, newv);
    }
 
    Node query(int u, int l, int r, int a, int b) {
        if(out) return Node();
        if(in) return seg[u];
        const int m = (l+r)/2;
        return query(e(u), l, m, a, b) + query(d(u), m+1, r, a, b);
    }
 
    Node query(int l, int r) { 
        return query(1, 0,lim, l, r);
    }
} seg;

/* (mind) 
    Time: 
    Padrão: 
    
    
*/

void solve() {
    ll n, q, x; cin>>n>>q;
    
    f (i, 0, n) {
        cin>>ns[i];
    }
    seg.build(n-1);
    while (q--) {
        ll t; cin>>t;

        if (t == 1) {
            ll p, x; cin>>p>>x;
            seg.update(p-1, x);
        }
        else {
            ll l, r; cin>>l>>r;

            // Node r = seg.query(l-1, r-1);
            cout << seg.query(l-1, r-1).v << " " << 
            seg.query(l-1, r-1).cnt << '\n';

        }

    }



}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}