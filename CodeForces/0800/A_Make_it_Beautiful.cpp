// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 18/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
// vector<ll> build

void solve() {
    cin>>n;
    vl v(n); for (ll i=0; i<n; i++) cin>>v[i];
    vl copyV = v;
    vl ans;

    if (count(all(v), v[0]) == n) {
        cout << "NO" << el;
        return;
    }
    ll soma=0;

    sort(all(v));

    if (v[0] != v.back()) {
        cout << "YES" << el;

        reverse(v.begin() + 1, v.begin() + (n-2) + 1);
        
        // correto?
        for (ll i=0; i < n; i++) {
            // em certa posicao preciso procurar um que nao seja igual a soma dos anteriores
            // se chegar nessa cond quer dizer que poderia dar merda... gambiarra
            if (v[i] == soma) {

                reverse(all(v));
                break;
            }
            soma += v[i];
        }
        
        for (auto x : v) cout << x << " ";
        cout << el;
    }
    else cout << "NO" << el;

}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}