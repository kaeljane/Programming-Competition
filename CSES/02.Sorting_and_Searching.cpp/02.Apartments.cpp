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
// 02/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, m;
string s, a, b, c;

/* (mind) 
    n : candidatos
    m : apartamentos disponiveis
    k : diferença maxima permitida

    33min 
    
*/
void solve() {
    cin>>n>>m>>k;
    vl pessoa(n); 
    vl ap(m);
    f (i, 0, n) cin>>pessoa[i];
    f (i, 0, m) cin>>ap[i];

    sort(all(pessoa));
    sort(all(ap));
    ll ans = 0;
    ll idxInicial = 0;

    f (i, 0, n) {
        f (j, idxInicial, m) {
            if (pessoa[i] - k <= ap[j] && ap[j] <= pessoa[i] + k) {
                ans += 1;
                idxInicial = j + 1;
                break;
            }
            else if (ap[j] < pessoa[i]-k) {
                idxInicial = j + 1;
                continue;
            }
            else {
                break;
            }
        }
    }
    cout << ans << el;

    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}