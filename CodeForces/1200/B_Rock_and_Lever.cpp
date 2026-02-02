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
// 01/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    i < j

    this is hard ;-; or NO?
    
    Ai & Aj >= Ai^Aj
    
    será que passa?

*/
void solve() {
    cin>>n;
    
    vl cnt(32, 0);
    vl v(n); for (ll i = 0; i < n; i++) {
        cin>>v[i];

        for (ll bit = 30; bit >= 0; bit--) {
            if (v[i] >> bit & 1) {
                // para saber se é 1 ou 0 no final
                cnt[bit]++;
                break;
            }
        }
    }
    
    ll ans = 0;
    
    for (ll i = 0; i < 32; i++) {
        ll qt = cnt[i];
        ans += (qt * (qt - 1)) / 2; // formando os pares
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