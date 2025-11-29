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
// 29/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
vl composites; 
vector<bool> is_composite(MAXN, false); 
 
void sieve(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        if (is_composite[i] == false) {
            for (ll j = i * i; j <= n; j += i)
                is_composite[j] = true;
        }
    }
    
    for (ll i = 2; i <= n; i++) {
        if (is_composite[i]) {
            composites.push_back(i);
        }
    }
}

void solve() {
    cin>>n;
    sieve(n);
    // for (auto x : composites) cout << x << " ";
    ll l=0, r=composites.size()-1;
    while (l < r) {
        if (composites[l] + composites[r] == n) {
            cout << composites[l] << " " << composites[r] << el;
            return;
        }
        else if (composites[l] + composites[r] > n) {
            r--;
        }
        else if (composites[l] + composites[r] < n) {
            l++;
        }
    }


    
}
signed main() {
    ___
    t=1;
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}