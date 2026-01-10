// ------------ Discipline is remembering who you said you wanted to be^^ ------------
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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 10/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    coord dos 1
    (1, 1) (1, 2) contou 2 no mesmo x
    (2, 1) (2, 2) contou 2 no mesmo x
    
*/
void solve() {
    cin>>n;
    
    vector<string> v(n);
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }

    vector<ii> pares;
    
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if (v[i][j] == '1') {
                pares.pb({i, j});
            }
        }
    }

    map<int, int> mapa;
    for (auto &x : pares) {
        mapa[x.first]++;
    }

    // verificando se sao iguais;
    set<int> conj;
    for (auto &x : mapa) {
        conj.insert(x.second);
    }

    if (conj.size() == 1) cout << "SQUARE" << el;
    else cout << "TRIANGLE" << el;


    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}