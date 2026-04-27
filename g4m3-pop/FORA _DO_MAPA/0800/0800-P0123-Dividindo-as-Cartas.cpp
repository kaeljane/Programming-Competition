#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 26/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, andressa = 0, bianca = 0;
string s, a, b, c;

/* (mind )
    par    -> andressa
    impart -> bianca
    
    16min 57sec (lentidao em digitar, talvez seja sono)

*/

void solve(){
    cin>>n;
    
    for (ll i = 0; i < n; i++) {
        cin>>s;
        if (s == "A") {
            if (i % 2 == 0) {
                andressa = 0;
            }
            else {
                bianca = 0;
            }
        }
        else if (s == "C") {
            if (i % 2 == 0) {
                cout << "ANDRESSA" << el;
            }
            else {
                cout << "BIANCA" << el;
            }
            return;
        }

        else if (s == "X" || s == "J" || s == "Q" || s == "K") {
            if (i % 2 == 0) {
                andressa += 10;
            }
            else {
                bianca += 10;
            }
        }
        else {
            if (i % 2 == 0) {
                andressa += stoll(s);
            }
            else {
                bianca += stoll(s);
            }
        }
    }

    if (andressa == bianca) cout << "EMPATE" << el;
    else if (andressa > bianca) cout << "ANDRESSA" << el;
    else cout << "BIANCA" << el;
    
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}