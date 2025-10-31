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
        Complexidade = O(n)
        
*/
void solve() {
        cin>>t>>n;
        while (t--) {
                ll count_0 = 0;
                ll count_odd = 0;
                ll count_even = 0;

                for (ll i=0; i < n; i++) {
                        cin>>x;
                        if (x == 0) count_0++;
                        else if (x % 2 == 1) count_odd++;
                        else count_even++;
                }
                if (count_even > 1) cout << "=-(\n";
                else if (count_even == 1) cout << "=-)\n";
                else {
                        if (count_odd > 0 && count_0 > 0) cout << "=-(\n";
                        else cout << "=-)\n";
                }
        }
}
signed main() {
        ___
        // t=1;
        // cin>>t;
        // while(t--)
        solve();
        
        return 0;
}