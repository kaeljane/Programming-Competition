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

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 1h 10min 
    Padrão: struct 
    
*/

struct Letra {
    char c;
    ll id;
};

bool cmp (Letra a, Letra b){
    if (a.c != b.c) {
        return a.c < b.c;
    }

    return a.id < b.id;
}

bool cmp2 (Letra a, Letra b){
    if (a.c != b.c) {
        return a.c > b.c;
    }

    return a.id < b.id;
}

void solve() {
    cin>>s;
    n = s.size();

    char inicio = s[0];
    char fim = s[n - 1];

    vector<Letra> v;

    f (i, 0, n) {
        if ((inicio <= fim && s[i] >= inicio && s[i] <= fim) ||
            (inicio > fim && s[i] <= inicio && s[i] >= fim)
        ) {
            Letra atual;
            atual.c = s[i];
            atual.id = i + 1;
            v.pb(atual);
        }
    }
    if (inicio <= fim) sort(all(v), cmp);
    else sort(all(v), cmp2);

    ll custo = abs(inicio - fim);
    
    cout << custo << " " << v.size() << el;

    f (i, 0, v.size()) {
        cout << v[i].id << " ";
    } 
    cout << el;
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}