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
// 17/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll MAXI = 1e9 + 7;
ll INF = 1e18 + 7;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        
        
*/
void solve() {
        cin>>n;
        vector<ii> pares;

        vl v(n);
        
        for (auto &x : v) {
                cin>>x;
        }
        sort(v);

        // enquanto tiver algum numero == 4
        bool verd = true;
        while (verd) {
                auto it = lower_bound(all(v), 4);
                ll ind = it - v.begin();
                ll valor = *it;
                if (valor == 4){
                        pares.pb({4, 2});
                        v[ind] = 0;
                }
                else verd = false;
        }

        verd = true;
        while (verd) {
                auto it = lower_bound(all(v), 3);
                ll ind = it - v.begin();
                ll valor = *it;
                if (valor == 3){
                        pares.pb({3, 1});
                        v[ind] = 0;
                }
                else verd = false;
        }


        // tem problema!!!!
        verd = true;
        while (verd) {
                auto it = lower_bound(all(v), 1);
                ll ind = it - v.begin();
                ll valor = *it;
                if (valor == 1){
                        for (auto &p : pares) {
                                if (p.fi == 3 && p.sec == 1) {
                                        p.fi++;
                                        p.sec++;
                                        v[ind] = 0;
                                        break;
                                }
                        }
                }
                else verd = false;
        }



}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}