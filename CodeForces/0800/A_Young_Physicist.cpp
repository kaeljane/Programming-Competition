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
// 12/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        Equilibrio?
        12
        1
        -7
        = 8

        9
        -7
        -2

        0
        3
        -3
        == 0
        
*/
void solve() {
        cin>>n;
        ll sum_x, sum_y, sum_z;
        sum_x = sum_y = sum_z = 0;
        while (n--) {
                cin>>x>>y>>z;
                sum_x += x;
                sum_y += y;
                sum_z += z;
        }

        if (sum_x == 0 && sum_y == 0 && sum_z == 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}