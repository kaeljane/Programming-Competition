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
        WUB[WE]WUB[ARE]WUBWUB[THE]WUB[CHAMPIONS]WUB[MY]WUB[FRIEND]WUB
        WE ARE  THE CHAMPIONS MY FRIEND 

        WUBWUBABCWUB
         ABC

        [Q]WUB[QQ]WUBWUBWUB[I]WUBWUB[WW]WUBWUBWUB[JOPJPBRH]
        
*/
void solve() {
        cin>>s;
        string teste = "WUB";
        vc letras;
        ll qt_e = 0;
        for (ll i=0; i < s.size(); i++) {
                if(i < s.size()-2){
                        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
                                if (i != 0 && qt_e == 0) {
                                        letras.push_back(' ');
                                        qt_e++;
                                }
                                i+=2;
                        }
                        else {
                                letras.push_back(s[i]);
                                qt_e = 0;
                        }
                }
                else {
                        letras.push_back(s[i]);
                        qt_e = 0;
                }
                
        }

        if (letras[0] == ' ') letras.erase(letras.begin());
        imp(letras, char, "");
}
signed main() {
        ___
        t=1;
        while(t--)solve();
        
        return 0;
}