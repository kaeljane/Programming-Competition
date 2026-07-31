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
    Time: 13min
    Padrão: struct

    treinando struct
    
*/

struct Soldado {
    ll altura;
    ll id;
};

bool cmp (Soldado a, Soldado b) {
    if (a.altura != b.altura) {
        return a.altura > b.altura;
    }
    // se for igual ordene pelo ID
    return a.id < b.id;
}

void solve() {
    cin>>n;
    ans = 0;
    vector<Soldado> v(n); 
    f (i, 0, n) {
        cin>>v[i].altura;
        v[i].id = i;
    }

    sort(all(v), cmp);

    ans += v[0].id; ans += (n-1) - v[n-1].id;
    
    if (v[0].id > v[n-1].id) ans--;

    cout << ans << el;

    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}