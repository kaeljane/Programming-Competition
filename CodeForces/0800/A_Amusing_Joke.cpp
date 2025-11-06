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
// 05/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        first is guest name
        nome anfitriao da residencia
        cartas empilhadas

*/
void solve() {
        map<char,int> MAPA_words;
        map<char,int> MAPA;
        cin>>a>>b>>c;
        for(ll i=0; i < a.size(); i++) {
                MAPA_words[a[i]]++;
        }
        for(ll i=0; i < b.size(); i++) {
                MAPA_words[b[i]]++;
        }
        for(ll i=0; i < c.size(); i++) {
                MAPA[c[i]]++;
        }

        if (MAPA_words == MAPA) cout << "YES" << '\n';
        else cout << "NO" << '\n';

}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}