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
// 03/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, a, b, c;
string s;

/* (mind) 
    Time: 5min 28sec
    Padrão: 
    
    inicialmente cada um tem a, b e c tokens

    jogado em rounds
    
    se dois jogadores tiver a mesma quantidade de 
    tokens o jogo termina


    ele quer o numero de rounds


*/
void solve() {
    vector<ll> v(3);
    cin>>v[0]>>v[1]>>v[2];
    ans = 0;
    while (true) {
        sort(all(v));
        set<ll> conj = {};
        f (i, 0, 3) conj.insert(v[i]);
        if (conj.size() < 3) {
            cout << ans << el;
            return;
        }
        else {
            v[2]--;
            v[0]++;
            ans++;
        }
    }
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}