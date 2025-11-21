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
#define el '\n'
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 21/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll MAXI = 1e9 + 7;
ll INF = 1e18 + 7;

ll t, n, m, l, r;
string s;

/* (mind) 
        
        
*/
void solve() {
        cin>>t;
        for (ll i=0; i < t; i++) {
                cin>>n>>m>>l>>r;
                vl vCasas;
                for (ll j = l; j <= r; j++) {
                        vCasas.pb(j);
                }
                
                ll start;
                if (abs(l) >= r) start = -1;
                else start = 0;

                auto it = lower_bound(all(vCasas), start);

                ll l_ = it - vCasas.begin();
                ll r_ = l_ + 1;

                l_ = vCasas[l_];
                r_ = vCasas[r_];
                ll qtDias = 0;

                bool esq=false, dir=true;
                for (ll j=0; j < m ; j++) {
                        if (j == 0) {
                                qtDias++;
                        }
                        else if (dir) {
                                if (r_ < r){
                                        r_++;
                                        qtDias++;
                                }
                                else if (r_ == r) {
                                        l_--;
                                        qtDias++;
                                }
                                esq = true;
                                dir = false;
                        }
                        else if (esq) {
                                if (l_ > l ){
                                        l_--;
                                        qtDias++;
                                }
                                else if (l_ == l) {
                                        r_++;
                                        qtDias++;
                                }
                                esq = false;
                                dir = true;
                        }

                }

                cout << l_ << " " << r_ << '\n';
        }
}
void solveOtimizado() {
        cin>>n>>m>>l>>r;

        ll d_Esq = min(m, abs(l));
        ll d_Dir = m - d_Esq; 

        cout << -d_Esq << " " << d_Dir << el;
}
signed main() {
        ___
        t=1;
        cin>>t;
	while(t--)
        solveOtimizado();
        
        return 0;
}

