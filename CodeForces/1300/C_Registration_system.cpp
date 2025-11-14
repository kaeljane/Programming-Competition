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
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 14/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        string numero
        coloco um dentro

        abacaba  OK
        acaba    OK
        abacaba  abacaba1 - > valor que está dentro do map em ordem 
        acab
        
*/
void solve() {
        // set<string> conj;
        // cin>>n;
        // while(cin>>s) {
        //         if (conj.count(s) == 0) {
        //                 cout << "OK" << '\n';
        //                 conj.insert(s);
        //         }
        //         // se estiver dentro do conjunto
        //         else {
        //                 for (ll i=1; i < 100000; i++) {
        //                         string s_back = s;
        //                         s_back += to_string(i);
        //                         if (conj.count(s_back) == 0) {
        //                                 conj.insert(s_back);
        //                                 cout << s_back << '\n';
        //                                 break;
        //                         }
        //                 }
        //         }
        // }

        unordered_map<string, ll> mapa;

        cin>>s;
        while(cin>>s) {
                if (mapa.count(s) == 0) {
                        cout << "OK" << '\n';
                        mapa[s]++;
                }
                else {
                        cout << s << mapa[s] << '\n';
                        mapa[s]++;
                }
        }

        
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}