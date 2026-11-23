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
    
    o tamanho de ambos é igual a m
    cada elemento do array é entre 1 a n (inclusive)
    
        a crescente
        b decrescente

    out: 
        numero de arrays a e b que satisfazem essas condicoes
    
    star and bars
    combinatoria com repeticao

    ((n+2m-1)!) / ((2m)!*(n-1)!) aplicar MOD em tudo

    2*10 = 20 maximo m
    0! = 1
    1! = 1
    2! = 2
    3! = dp[2] * i 
    4! = dp[3] * i
    5! = dp[4] * i 
    ...

    tambem usar inverso modular


*/
ll binPow(ll a, ll b) {
    a %= MOD;
    ll res = 1;
    while (b > 0) {
        if (b&1) {
            res = (res * a) % MOD;
        }
        a = (a*a) % MOD;
        b >>= 1;
    }
    return res;
}

ll inverseMod(ll a, ll b) {
    return a * binPow(b, MOD-2) % MOD;
}

void solve() {
    ll n, m; cin>>n>>m;

    vector<ll> dpFat(1101, 1);
    dpFat[0] = 1; dpFat[1] = 1; dpFat[2] = 2;

    for (ll i = 2; i <= 1100; i++) {
        dpFat[i] = (dpFat[i-1] * i) % MOD;
    }

    // ((n+2m-1)!) / ((2m)!*(n-1)!)
    ll nom = dpFat[(n + 2*m-1)];
    ll den1 = dpFat[2*m];
    ll den2 = dpFat[n-1];
    
    ll den = den1 * den2 % MOD;

    cout << inverseMod(nom, den) << '\n';

    // dbg(nom, den1, den2, dpFat);


}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}