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

ll n, t, k, v, x, y, z;
string s, a, b, c;

/* (mind) 
    a = n - b
    a = 2 - b
    a + b == 2
    a + b == n possibilidades de numeros que dar n

    a + b == 4 (3, 1) (2, 2) (1, 3)

    a + b == 6 (5, 1), (4, 2), (3, 3), (2, 4), (1, 5)
    
*/
void solve() {
    cin>>t;
    while(cin>>n) {
        cout << n - 1 << '\n'; 
    }
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}