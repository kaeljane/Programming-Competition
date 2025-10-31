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
        Colocar tudo em um set e analisar quantos números tem nele.
*/
void solve() {
        map<int, int> mapa;
        a = "Yes";
        for(ll i=0; i<5; i++) {
                cin>>n;
                mapa[n]++;
        }
        for (auto x : mapa){if (x.second == 3 || x.second == 2); else {a = "No";}}
        cout << a << '\n';
}       
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}