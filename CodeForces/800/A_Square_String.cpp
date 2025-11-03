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
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, " "))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 31/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, c;

/* (mind) 
        é um quadrado??
        aa
        abc abc
        ab ab
        baa baa

        parecem ser iguais

        corta a string na metade e ver se é igual...

        precisa ser par.

        STRINGS -> [A] e [B]
        fazer um for para dividir a string [S]


*/
void solve() {
        cin>>s;
        c = "YES";
        string a = "";
        string b = "";
        if (s.size() % 2 == 0) {
                for (ll i=0;i<s.size(); i++) {
                        if (i < s.size()/2) {
                                a += s[i];
                        }
                        else {
                                b += s[i];
                        }
                }
                if (a != b) c = "NO";
        }
        else c = "NO";
        cout << c << '\n';
        
}
signed main() {
        ___
        t=1;
        cin>>t;
        while(t--)solve();
        
        return 0;
}