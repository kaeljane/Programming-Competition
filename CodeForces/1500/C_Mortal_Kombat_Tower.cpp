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
    
    seu amigo joga primeiro
    
    usar pontos de saltos
    
    pontos de saltos
    - pode ser usado para matar um chefe difícil

    ecnontrar o numero minimo de pontos de salto que seu amigo
    precisa usar para que você e seu amigo matem todos n chefes 
    na ordem dada.

    quando uma info nao basta precisa ter duas dimensões
    

    
*/

void solve() {
    ll n; cin>>n;
    vl v(n); f(i,0,n) cin>>v[i];

    vll dp(n+1, vl(2, INF));
    
    dp[0][1] = 0;
    f (i, 1, n+1) {
        dp[i][0] = dp[i-1][1] + v[i-1];
        if (i >= 2) 
            dp[i][0] = min(dp[i][0], dp[i-2][1] + v[i-2] + v[i-1]);

        dp[i][1] = dp[i-1][0];
        if (i >= 2) dp[i][1] = min(dp[i][1], dp[i-2][0]);        

    }

    cout << min(dp[n][0], dp[n][1]) << '\n';


}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}