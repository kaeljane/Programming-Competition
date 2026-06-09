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
// 09/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 


*/
void solve() {
    cin>>n>>m;

    vector<ll> v(n+1);
    vector<ll> pos(n+2);
    
    
    f (i, 1, n+1) {
        cin>>v[i]; 
        pos[v[i]] = i;
    }
    ll ans = 1; // começa 
    f (i, 1, n) {
        if (pos[i] > pos[i+1]) ans++;
    }
    
    f (i, 0, m) {
        cin>>x>>y;

        ll num1 = v[x];
        ll num2 = v[y];

        set<ll> afetados;
        if (num1 - 1 >= 1) afetados.insert(num1 - 1);
        if (num1 < n)      afetados.insert(num1);
        if (num2 - 1 >= 1) afetados.insert(num2 - 1);
        if (num2 < n)      afetados.insert(num2);
        
        for (ll c : afetados) {
            if (pos[c] > pos[c+1]) ans--;
        }

        swap(v[x], v[y]);
        pos[num1] = y; //
        pos[num2] = x; //

        for (ll c : afetados) {
            if (pos[c] > pos[c+1]) ans++;
        }
        cout << ans << el;


    }

}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}