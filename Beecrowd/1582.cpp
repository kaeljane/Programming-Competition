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

*/
void solve() {
    ll sides[3] = {x, y, z};
    sort(sides, sides + 3);
    
    ll a = sides[0];
    ll b = sides[1];
    ll c_hyp = sides[2];
    
    bool is_pitagorica = (a * a + b * b == c_hyp * c_hyp);
    
    if (is_pitagorica) {
        ll mdc_xy = __gcd(x, y);
        ll mdc_xyz = __gcd(mdc_xy, z);
        
        if (mdc_xyz == 1) {
            cout << "tripla pitagorica primitiva\n";
        } 
        else {
            cout << "tripla pitagorica\n";
        }
    } 
    else {
        cout << "tripla\n";
    }
}

signed main() {
    ___
    while(cin >> x >> y >> z) {
        solve();
    }
    
    return 0;
}