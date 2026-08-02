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
// 31/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans=0;
string s, a, b, c;

/* (mind) 
    Time: +40min
    Padrão: arvore, recursao

    
    qual lugar ele deve ocupar?
    se os pares nao estiver crescente ja altere.
    
    preciso treinar mais recursão!!!!


*/
void arrumar (vector<ll> &v, ll l, ll r) {
    if (l == r) return;

    ll mid = (l + r) / 2;
    // arrumar metade e depois a outra metade...
    arrumar(v, l, mid);
    arrumar(v, mid + 1, r);

    if (v[l] > v[mid+1]) {
        ans++;

        ll tamBloco = mid - l + 1;

        f (i, 0, tamBloco) {
            swap(v[l + i], v[mid + 1 + i]);
        }
    }


}

void solve() {
    cin>>n;
    vl v(n+1); f (i, 1, n+1) cin>>v[i];

    ans = 0;
    arrumar(v, 1, n);

    if (is_sorted(v.begin()+1, v.end())) cout << ans << el;
    else cout << -1 << el;
    

    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}