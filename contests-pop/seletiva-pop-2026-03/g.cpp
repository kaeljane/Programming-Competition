#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 22/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    

*/

void solve(){
    cin>>n;
    cin>>s;
    
    map<char, ll> mapa;

    mapa['A'] = 12;
    mapa['F'] = 17;
    mapa['K'] = 70;
    mapa['B'] = 97;
    mapa['G'] = 22;
    mapa['L'] = 33;
    mapa['C'] = 31;
    mapa['H'] = 87;
    mapa['M'] = 59;
    mapa['D'] = 44;
    mapa['I'] = 10;
    mapa['E'] = 16;
    mapa['J'] = 61;
    
    mapa['a'] = 24;
    mapa['f'] = 34;
    mapa['k'] = 140;
    mapa['b'] = 194; 
    mapa['g'] = 44;
    mapa['l'] = 66;
    mapa['c'] = 62;
    mapa['h'] = 174;
    mapa['m'] = 118;
    mapa['d'] = 88;
    mapa['i'] = 20;
    mapa['e'] = 32;
    mapa['j'] = 122;

    ll andressa = 0;
    ll bianca = 0;
    char anterior = '0';
    for (ll i = 0; i < n; i++) {
        
        if (i&1) { // bianca
            if (s[i] == anterior) {
                bianca += mapa[s[i]]*3;
            }
            else {
                bianca += mapa[s[i]];
            }
        }
        else { // andressa
            if (s[i] == anterior) {
                andressa += mapa[s[i]]*3;
            }
            else {
                andressa += mapa[s[i]];
            }
        }
        anterior = s[i];
    }


    if (andressa >= bianca) {
        cout << "ANDRESSA" << el;
    }
    else {
        cout << "BIA" << el;
    }


    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}