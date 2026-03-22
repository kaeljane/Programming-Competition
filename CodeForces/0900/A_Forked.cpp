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
// 12/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, a, b, t, k, x, y, z;
string s, c;

/* (mind) 
    
    
*/
void solve() {
    ll xRei, yRei;
    ll xRainha, yRainha;
    
    cin>>a>>b; // movimentos possiveis do cavalo
    cin>>xRei>>yRei; // posicoes
    cin>>xRainha>>yRainha; // posicoes
    

    set<ii> rei; set<ii> rainha;

    rei.insert({xRei + a, yRei - b});
    rei.insert({xRei + b, yRei - a});
    rei.insert({xRei - b, yRei - a});
    rei.insert({xRei - a, yRei - b});

    rei.insert({xRei - a, yRei + b});
    rei.insert({xRei - b, yRei + a});
    rei.insert({xRei + b, yRei + a});
    rei.insert({xRei + a, yRei + b});
    
    rainha.insert({xRainha + a, yRainha - b});
    rainha.insert({xRainha + b, yRainha - a});
    rainha.insert({xRainha - b, yRainha - a});
    rainha.insert({xRainha - a, yRainha - b});

    rainha.insert({xRainha - a, yRainha + b});
    rainha.insert({xRainha - b, yRainha + a});
    rainha.insert({xRainha + b, yRainha + a});
    rainha.insert({xRainha + a, yRainha + b});

    ll ans = 0;
    for (auto &x : rei) {
        if (rainha.count(x) > 0) ans++;
    }
    cout << ans << el;

}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}