#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) v.begin(), v.end()
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 29/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        Complexidade = O(n² * t)
        
*/
struct Torre {
        ll x;
        ll y;
        ll r_2;
};

void solve() {
        cin>> n >> t;
        vector<Torre> torres(t);
        for(ll i=0; i < t; i++) {
                ll r_atual;
                cin>>torres[i].x >> torres[i].y >> r_atual;
                torres[i].r_2 = (ll)r_atual * r_atual;
        }
        ll cel_n_cob = 0;
        for (ll cx=0; cx < n; cx++) {
                for (ll cy=0; cy < n; cy++) {

                        bool esta_cob = false;

                        for (ll k=0; k < t; k++) {
                                ll dx = cx -torres[k].x;
                                ll dy = cy - torres[k].y;

                                ll dis_q = dx * dx + dy * dy;

                                if (dis_q <= torres[k].r_2){
                                        esta_cob = true;
                                        break;
                                }
                        }
                        if (!esta_cob) cel_n_cob++;
                }
        }
        cout << cel_n_cob << '\n';
}
signed main() {
        ___
        // t=1;
        // cin>>t;
        // while(t--)
        solve();
        
        return 0;
}