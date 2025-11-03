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
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ' '))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 23/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    213 132
    n/100000 -> [2]
    (n/10000)%10  -> [1]
    (n/1000) -> (123) %10 -> [3]
    
    (n/100) -> (2131) %10 -> [1]
    n/10 -> (21313) %10 -> [3]
    n%10  -> [2]
    
    sei que da para fazer com string...
*/
void solve() {
    cin>>t;
    while(cin>>n) {
        if ((n/100000 + (n/10000)%10 + (n/1000)%10) == ((n/100)%10 + (n/10)%10 + n%10 )) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}