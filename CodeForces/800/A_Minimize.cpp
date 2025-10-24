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

ll n, t, k, v, x, y, z, m=INT_MAX;
string s, a, b, c;

/* (mind) 
    (c - a) + (b - c) 
    (c - 1) + (2 - c)
    Minimum value...

    c==1
    (1-1) + (2-1) = 0 + 1 == 1

    c==2 
    (2-1) + (2-2) = 1 + 0 == 1
    (2) - 1 + 2 (- 2)
    sobra so -a + b
    
    c==3
    (3-1) + (2-3) = 2 - (-1) == 3

    quando passar do minimo estabelecido pare e imprima o menor até o momento.
*/
void solve() {
    cin>>t;
    while(cin>>x>>y) {
        cout << -(x) + y << '\n';
    }
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}