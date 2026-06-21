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
// 21/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, p, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>p>>s;
    
    ll i = 0;
    ll j = 0;

    ll tam_p = p.size();
    ll tam_s = s.size();

    while (i < tam_p && j < tam_s) {

        if (p[i] != s[j]) {
            cout << "NO" << el;
            return;
        }

        char letra_atual = p[i];
        
        ll conta_p = 0;
        ll conta_s = 0;

        while (i < tam_p && p[i] == letra_atual) {
            conta_p++;
            i++;
        }

        while (j < tam_s && s[j] == letra_atual) {
            conta_s++;
            j++;
        }

        if (conta_s < conta_p || conta_s > 2 * conta_p) {
            cout << "NO" << el;
            return;
        }
    }
    if (i < tam_p || j < tam_s) cout << "NO" << el;
    else cout << "YES" << el;

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}