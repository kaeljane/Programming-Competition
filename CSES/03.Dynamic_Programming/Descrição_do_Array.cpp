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

/* (mind) 
    Time: 
    Padrão: 
    
    
*/

void solve() {
    ll n, m; cin>>n>>m;

    vector<ll> mat(n+1); for (ll i = 1; i <= n; i++) cin>>mat[i]; 
    vector<vector<ll>> dp(n+1, vector<ll>(m+2, 0));
    if (mat[1] == 0)
        for (ll i = 1; i <= m; i++) {
            dp[1][i] = 1;
        }
    else 
        dp[1][mat[1]] = 1;

    for (ll i = 2; i <= n; i++) { // 2 para nao precisar verificar
        for (ll v = 1; v <= m; v++) {
            if (mat[i] != 0 && v != mat[i]) continue;

            dp[i][v] = dp[i-1][v];
            if (v > 1) dp[i][v] += dp[i-1][v-1];
            if (v < m) dp[i][v] += dp[i-1][v+1];
            
            dp[i][v] %= MOD;

        }
    }

    ans = 0;
    for (ll v = 1; v <= m; v++) {
        ans += dp[n][v];
        ans %= MOD;
    }
    cout << ans << '\n';


}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}