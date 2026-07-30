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
// 30/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, m, a, b, c, d;
string s;

/* (mind) 
    Time: 26min
    Padrão: struct

    indo treinar struct em outros julgadores...
    
*/

struct Jogador {
    string nome;
    ll max_abc;
    ll sum_cd;
    ll idade;
    ll id;
};

bool cmp(Jogador a, Jogador b)  {
    if (a.max_abc != b.max_abc) {
        return a.max_abc > b.max_abc;
    }

    if (a.sum_cd != b.sum_cd) {
        return a.sum_cd > b.sum_cd;
    }

    if (a.idade != b.idade) {
        return a.idade < b.idade;
    }

    return a.id < b.id;
}

void solve() {
    cin>>n>>m;
    vector<Jogador> v(m);

    f (i, 0, m) {
        cin >> v[i].nome >> v[i].idade >> a >> b >> c >> d;

        v[i].max_abc = max({a, b, c});
        v[i].sum_cd = c + d;
        v[i].id = i;
    }

    sort(all(v), cmp);

    f (i, 0, n) {
        cout << v[i].nome << el;
    }
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}