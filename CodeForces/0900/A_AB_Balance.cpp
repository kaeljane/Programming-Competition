// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define f(i,b,e) for (ll i = (b); i < (e); i++)
#define rf(i,b,e) for (ll i = (b); i >= (e); i--)
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define uset unordered_set
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 06/03/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    ab
    ba

    ab(s) == ba(s)
    quantos passos?? O MINIMO POSSIVEL!!
    pode ser igual a zero...

    a[ab]b[b[a][b]a]a === já está igual!!
    
    ab = 2
    ba = 2
    
    obs.: comece com a e depois coloque o b e assim vai indo e tem que terminar com a também
    ex.: 
        ababababababa "==="
        ab = 6
        ba = 6

    abbaab
    ab = 2
    ba = 1

    aabbbabaa
        ab = 2
        ba = 2
    abba
    abbaaa


*/

ll verificadorAB(string &s) {
    string subAB = "ab";

    ll contAB = 0;
    size_t pos = 0; // para posic de string

    while ((pos = s.find(subAB, pos) ) != string::npos) {
        contAB++;
        pos += 1; 
    }
    return contAB;

}

ll verificadorBA(string &s) {
    string subBA = "ba";

    ll contBA = 0;
    size_t pos = 0; // para posic de string

    while ((pos = s.find(subBA, pos) ) != string::npos) {
        contBA++;
        pos += 1; 
    }
    return contBA;

}

void solve() {
    cin>>s;
    n = s.size();
    map<char, ll> mapa;

    // verificadores ////////
    ll AB = verificadorAB(s);
    ll BA = verificadorBA(s);
    /////////////////////////

    if (AB == BA) {
        cout << s << el;
        return;
    }

    while(AB != BA) {
        // se for igual ele vai parar
        
        // brute force A
        for (ll i = 0; i < n; i++) {
            string backS = s;
            backS[i] = 'a';
            ll backAB = verificadorAB(backS);
            ll backBA = verificadorBA(backS);

            if (backAB == backBA) {
                // é o que queremos
                cout << backS << el;
                return;
            }
            else if (abs(AB - BA) > abs(backAB - backBA)) {
                AB = backAB;
                BA = backBA;
                s = backS;
                i = 0;
            }
        }

        // brute force B
        for (ll i = 0; i < n; i++) {
            string backS = s;
            backS[i] = 'b';
            ll backAB = verificadorAB(backS);
            ll backBA = verificadorBA(backS);

            if (backAB == backBA) {
                // é o que queremos
                cout << backS << el;
                return;
            }
            else if (abs(AB - BA) > abs(backAB - backBA)) {
                AB = backAB;
                BA = backBA;
                s = backS;
                i = 0;
            }
        }
    }



    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}