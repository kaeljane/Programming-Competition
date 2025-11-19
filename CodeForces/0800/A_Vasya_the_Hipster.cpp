#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define iii par<ll, ii>
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
#define sort(v) sort(all(v))
#define rsort(v) sort(rall(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) (v).size()
#define vazio(v) (v).empty()
#define lb lower_bound
#define ub upper_bound
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 18/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll MAXI = 1e9 + 7;
ll INF = 1e18 + 7;

ll n, t, k, x, y, z, r, b, qt_diff=0, qt_igual=0;
string s, a, c;

/* (mind) 
        
        
*/
void solve() {
        cin>>r>>b;
        bool verd=true;
        while (verd) {
                if (r-1 >= 0 && b-1>=0) {
                        qt_diff++;
                        r--;
                        b--;
                }
                else if (r == 0 || b == 0) {
                        if (r == 0 && b - 2 >= 0) {
                                b-=2;
                                qt_igual++;
                        }
                        else if (b == 0 && r - 2 >= 0) {
                                r-=2;
                                qt_igual++;
                        }
                }
                if ((r == 0 && b == 0) || (r == 1 && b == 0) || (r == 0 && b == 1)) verd=false;

        }
        cout << qt_diff << " " << qt_igual << '\n';
        
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}