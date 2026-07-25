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
// 25/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, m, y, z, ans;
string s, a, b, c, s2;

/* (mind) 
    Time: 8min 12sec -> 11min 23sec
    Padrão: stl
    
    ;-;
    se acalmar e pensar


*/
void solve() {
    cin>>n>>m>>s>>s2;

    map<ll, ll> mpNecessario;

    for (auto i : s2) mpNecessario[i]++;

    map<ll, ll> mpTem;

    for (auto i : s2) mpTem[i] = 0;
    for (auto i : s) mpTem[i]++;
    ll minn = INF;

    for (auto i : mpNecessario) {
        minn = min(mpTem[i.fi] / i.sec, minn);
    }

    cout << minn << el;


    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}