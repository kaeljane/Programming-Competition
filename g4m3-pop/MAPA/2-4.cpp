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
string s1, s2, s3, s4, a, b, c, d, p1, p2, p3, p4;

/* (mind )
    23m 11s
    27m 27s    

*/

void solve(){

    getline(cin, s1); ///
    getline(cin, s2); //
    getline(cin, s3); ///
    getline(cin, s4); //

    // testar s1 e s3
    stringstream ss1(s1);
    stringstream ss2(s2);
    stringstream ss3(s3);
    stringstream ss4(s4);

    while (ss1 >> a) {
        p1 = a;
    }

    while (ss2 >> b) {
        p2 = b;
    }

    while (ss3 >> c) {
        p3 = c;
    }

    while (ss4 >> d) {
        p4 = d;
    }

    // analisar quantas letras iguais

    ll beleza = 0;
    ll tam1 = p1.size();
    for (ll i = tam1-1; i >= 0; i--) {
        if (p1[i] == p3[i]) {
            beleza++;
        }
        else {
            break;
        }
    }
    ll tam2 = p2.size();
    for (ll i = tam2-1; i >= 0; i--) {
        if (p2[i] == p4[i]) {
            beleza++;
        }
        else {
            break;
        }

    }

    cout << beleza << el;
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}