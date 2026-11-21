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
    
    Cada célula guarda "quanto eu ganho a mais que o adversário
    nesse pedaço". Para calcular, tento as duas pontas e 
    desconto o que o adversário ganharia ao que sobra.
    
*/

void solve() {
    ll n; cin>>n;
    vector<ll> x(n);
    ll total = 0;
    for (ll &v : x) {
        cin>>v;
        total += v;
    }

    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    
    // caso base
    for (ll i = 0; i < n; i++) {
        dp[i][i] = x[i];
    }

    for (ll len = 2; len <= n; len++) {
        for (ll l = 0; l + len - 1 < n; l++) {
            ll r = l + len - 1;
            dp[l][r] = max(x[l] - dp[l+1][r],
                           x[r] - dp[l][r-1]);
            // dbg(dp);
        }
    }

    cout << (total + dp[0][n-1]) / 2 << '\n';


}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}