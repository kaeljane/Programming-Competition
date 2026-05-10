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
// 10/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, x1, x2, x3, y11, y2, y3;
string s, a, b, c;

/* (mind) 
    13min 1sec
    
*/
void solve() {
    cin>>x1>>y11>>x2>>y2>>x3>>y3;
    map<ll, ll> X;
    map<ll, ll> Y;

    X[x1]++; X[x2]++; X[x3]++; Y[y11]++;  Y[y2]++;  Y[y3]++;
    
    for (auto &x : X) { 
        if (x.sec == 1) cout << x.first << " ";
    }

    for (auto &y : Y) { 
        if (y.sec == 1) cout << y.first << el;
    }
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}