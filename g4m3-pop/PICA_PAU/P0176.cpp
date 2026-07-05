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
// 04/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c, ped1, ped2, ped3, ped4;

/* (mind) 
    Time: 9min 29seg
    Padrão: string
    
    ab + c
    a + bc

*/
void solve() {
    cin>>s;
    ped1="", ped2="", ped3 = "", ped4 = "";
    ped1 += s[0], ped1 += s[1];
    ped2 += s[2];
    ped3 += s[0];
    ped4 += s[1], ped4 += s[2];

    ll caso1 = stoll(ped1) + stoll(ped2);
    ll caso2 = stoll(ped3) + stoll(ped4);
    
    if (caso1 > caso2) {
        cout << caso1 << el;
    }
    else cout << caso2 << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}