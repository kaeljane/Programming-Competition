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
// 13/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        precisa achar o h primeiro, depois
        precisa achar o e 
        precisa achar o l
        precisa achar o l
        precisa achar o o
        
*/
void solve() {
        cin>>s;
        bool h = false;
        bool e = false;
        bool l = false;
        bool l_ = false;
        bool o = false;
        vc car;
        vector<bool> vb;
        // cout << s[4];
        for (ll i=0; i < s.size(); i++) {
                if (s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o') {
                        car.push_back(s[i]);
                }
        }
        
        for (auto x : car) {
                if (h == false && x == 'h') h = true;
                else if (h == true && e == false && x == 'e') e = true;
                else if (h == true && e == true && l == false && x == 'l') l = true;
                else if (h == true && e == true && l == true && l_ == false && x == 'l') l_ = true; 
                else if (h == true && e == true && l == true && l_ == true && o == false && x == 'o') o = true;
        }

        if (h == true && e == true && l == true && l_ == true && o == true) cout << "YES" << '\n';
        else cout << "NO" << '\n';

        cout << '\n';

}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}