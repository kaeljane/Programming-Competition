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
#define rall(v) (v).rbegin(), (v.rend)
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
// 14/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll MAXI = 1e9 + 7;
ll INF = 1e18 + 7;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        sereja
        dima
        
*/
void solve() {
        cin>>n;
        vl v;
        deque<ll> deq;
        while(cin>>x) deq.pb(x);

        ll qt_s=0, qt_d=0;
        for (ll i=0; i < n; i++) {
                if (i%2==0) { // sereja 
                        if (deq.front() > deq.back()) {
                                qt_s += deq.front();
                                deq.ppf();
                        }
                        else {
                                qt_s += deq.back();
                                deq.ppb();
                        }
                }
                else {
                        if (deq.front() > deq.back()) {
                                qt_d += deq.front();
                                deq.ppf();
                        }
                        else {
                                qt_d += deq.back();
                                deq.ppb();
                        }
                }
        }
        cout << qt_s << " " << qt_d << '\n';


}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}