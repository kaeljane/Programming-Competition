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
    
    construir uma estrada que se repete para sempre
    x : cresce para a direita
    y : cresce para cima

    começa virada para cima

    tem que imprimir na devida ordem

    
*/


void solve() {
    vector<ll> dX = {0, 1, 0, -1};
    vector<ll> dY = {1, 0, -1, 0};
    set<pair<ll, ll>> pretos;
    map<pair<ll, ll>, ll> mp;

    cin>>n;
    ll xA = 0, yA = 0;
    ll posicao = 0;
    for (ll i = 0; i < n; i++) { // passos
        if (pretos.count({xA, yA})) {
            pretos.erase({xA, yA});
            posicao = ((posicao % 4 - 1 % 4) + 4) % 4;
            mp[{xA, yA}] = -1; 
        }
        else {
            pretos.insert({xA, yA});
            posicao = (posicao + 1) % 4;
            mp[{xA, yA}] = i;
        }
        xA += dX[posicao];
        yA += dY[posicao];

        // dbg(pretos);
        
    }

    vector<pair<ll, ll>> ordem(n, {-INF, -INF}); 

    ll qt = 0;
    for (auto &x : mp) {
        if (x.second != -1) {
            ordem[x.second] = x.first;
            qt++;
        }
    }

    cout << qt << el;

    for (auto &x : ordem) {
        if (x.first != -INF && x.second != -INF) {
            cout << x.first << " " << x.second << el;
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