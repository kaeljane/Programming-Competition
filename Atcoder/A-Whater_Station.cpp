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
// 31/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        100km 
        a cada 5km tem water
        0 100
        1 6 11 16 
        QUAL É MAIS PROXIMO DO NÚMERO????
        menor valor
        n(53) --> 55
        21 - 5 < 21 
        16 < 21
*/
void solve() {
        cin>>n;
        ll i = 0;
        for (; i<n; i+=5);
        if (abs(i - n) < abs(i-5-n)) cout << i<< '\n';
        else cout << i-5 << '\n';

        
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}