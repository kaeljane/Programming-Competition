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

ll n, t, k, x, y, z, r;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {
    cin>>n;
    map<int, int> mapa;
    r = -1;
    for(ll i = 0; i < n; i++){
        cin>>k;
        mapa[k]++;
    }
    for(auto x : mapa){
        if (x.second >= 3) {
            r = x.first;
            break;
        }
    }
    cout << r << '\n';
}
int main() {
    ___
    cin>>t;
    while(t--)solve();
    
    return 0;
}