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

/* (mind) 
    n = 5 [5, -5, 5, -5, 5] impar -> proprio número
    n = 4  [4, -4, 4, -4]   par -> 0
    
*/
void solve() {
    ll t, x, n; cin>>t;
    while(cin>>x>>n) {
        if (n%2==0) cout << 0 << '\n';
        else cout << x << '\n'; 
    }
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}