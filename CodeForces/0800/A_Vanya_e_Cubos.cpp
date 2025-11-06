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
// 03/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z, qt=0;
string s, a, b, c;

/* (mind) 
    1
    2
    3
    6
    12
    ...
          []
        [][][]
     [][][][][][]
 [][][][][][][][][][] -> exatamente 25 blocos..
    1, 3, 6, 10, 15 -> tem que somar tudo isso
       2, 3, 4, 5
*/
void solve(){
    cin>>n;
    while(x <= n){
        qt++;
        x += (qt*(qt+1))/2;
    }
    cout << qt - 1 << '\n';
}
signed main() {
    ___
    t=1;
    // cin>>t;
    while(t--)solve();
    
    return 0;
}