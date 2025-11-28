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
// 27/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        
        
*/

ll printSubarrays(vl &v) {
    ll n = sz(v);
    ll qt=0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vl vetor;
            for (int k = i; k <= j; k++) {
                vetor.push_back(v[k]);
            }
            vl copyVetor = vetor;
            sort(all(copyVetor));
            if (vetor == copyVetor) qt++;
        }
    }

    return qt;
}
void solve() {
        cin>>n;
        vl v(n);
        for (ll i=0; i<n;i++) cin>>v[i];
        cout << printSubarrays(v) << el;

}
signed main() {
        ___
        t=1;
        cin>>t;
        while(t--)
        solve();
        
        return 0;
}