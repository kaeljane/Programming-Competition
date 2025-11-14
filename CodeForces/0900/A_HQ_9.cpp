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
        H Q 9 +
        presta atenção no texto!!!
*/
void solve() {
        cin>>s;
        bool r = false;
        // versão um pouco mais eficiente que a anterior
        set<char> conj;
        for (ll i=0; i < s.size(); i++) {
                conj.insert(s[i]);
        }

        if (conj.count('H') == 1) r = true;
        else if (conj.count('Q') == 1) r = true;
        else if (conj.count('9') == 1) r = true;

        if (r) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}