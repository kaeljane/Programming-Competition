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
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 14/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        00:44
        00:58
        
*/
void solve() {
        cin>>n;
        vl list;
        ll l=0, r=0;
        while(cin>>x) {
                list.push_back(x);
        }

        ll best = 0;
        ll qt=0;
        for (ll i=0; i < list.size(); i++) {
                if ( list[r] > list[i]) {
                        qt = 1;
                        l = i;
                        r = i;
                        best = max(best, qt);
                }
                else if ( list[l] == list[i] || list[r] == list[i] || list[r] < list[i] ) {
                        r = i;
                        qt++; 
                        best = max(best, qt); 
                }
        }

        cout << best << '\n';

        
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}