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
// 13/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        1+2*3   = 7
        1*(2+3) = 5
        1*2*3   = 6
        (1+2)*3 = 9
        
        '+' || '*'

        x + y + z *
        
        x + y * z *
                
        (x + y) * z *
        
        x * y * z *
        
        (x * y) + z *

        x * (y + z) *


*/
void solve() {
        cin >> x >> y >> z;
        ll best = 0;
        
        ll one = x+y*z;
        best = max(best, one);
        
        ll two = x*(y+z);
        best = max(best, two);

        ll three = x*y*z;
        best = max(best, three);
        
        ll four = (x+y)*z;
        best = max(best, four);

        ll five = x+y+z;
        best = max(best, five);

        ll six = x * (y + z);
        best = max(best, six);
        cout << best << '\n';

}

signed main() {
        ___
        t=1;
        while(t--)solve();
        
        return 0;
}