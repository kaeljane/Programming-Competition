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
// 14/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        
        
*/
void solve() {
        cin>>s;
        string s_back = s;
        // enquanto nao for palindromo
        reverse(all(s));
        ll count = 0; //par -> second | impar -> first
        
        if (s == s_back) cout << "First" << '\n';
        // else {
        //         // se entrar aqui é second na primeira vez
        //         while(true) {

        //                 count++;
        //         }
        // }
}
signed main() {
        ___
        t=1;
        cin>>t;
        while(t--)solve();
        
        return 0;
}