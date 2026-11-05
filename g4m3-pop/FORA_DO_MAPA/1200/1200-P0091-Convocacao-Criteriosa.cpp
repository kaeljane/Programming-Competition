// ------------ Repetition repetition repetition repetition repetition repet... ------------
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
#define uset unordered_set
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 18/04/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m, k1, k2, k3, k4, k5, a, b, c, d;
string s;

/* (mind) 
    usando struct pela primeira vez
    
*/
struct Jogador {
    string nome;
    ll idade;
    ll maxAbc;
    ll somaCd;
    ll id;
};


bool compara(Jogador j1, Jogador j2) {
    if (j1.maxAbc != j2.maxAbc) {
        return j1.maxAbc > j2.maxAbc;
    }

    if (j1.somaCd != j2.somaCd) {
        return j1.somaCd > j2.somaCd;
    }

    if (j1.idade != j2.idade) {
        return j1.idade < j2.idade;
    }

    if (j1.id != j2.id) {
        return j1.id < j2.id;
    }

}

void solve() {
    cin>>n>>m;

    vector<Jogador> jogadores;
    for (ll i = 0; i < m; i++) {
        cin>>s>>k1>>k2>>k3>>k4>>k5;
        string nome = s;
        ll idade = k1;
        ll maxAbc = max({k2, k3, k4});
        ll somaCd = k4 + k5;
        
        jogadores.pb({nome, idade, maxAbc, somaCd, i});
    }

    sort(all(jogadores), compara);
    
    for (ll i = 0; i < n; i++) {
        cout << jogadores[i].nome << el;
    }

}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}