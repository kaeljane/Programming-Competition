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
// 06/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>n;
    ll qt = 0;
    vl lista = {2050, 
        20500, // 1
        205000, // 2
        2050000, // 3
        20500000, // 4
        205000000, // 5
        2050000000, // 6
        20500000000, // 7
        205000000000, // 8
        2050000000000, // 9
        20500000000000, // 10
        205000000000000, // 11
        2050000000000000, // 12
        20500000000000000, // 13
        205000000000000000, // 14
        2050000000000000000, // 15
        20500000000000000000, // 16
        205000000000000000000, // 17

    };
    if (n < 2050) cout << -1 << el;
    else {
        ll sum = 0;
        ll ans = 0;
        for (ll i = lista.size()-1; i >= 0; i--) {
            if (sum == n) {cout << ans << el; return;}
            if ((sum + lista[i]) <= n) {
                sum += lista[i];
                ans++;
                i++;
            }
        }
        if (sum == n) {cout << ans << el; return;}
        cout << -1 << el;
    }

}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}