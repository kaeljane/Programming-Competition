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
// 19/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, l, c;
// string s, a, b;

/* (mind) 
    (2) STL - Maratona UFMG
    
    4*3

    n : cartas
    k : caracteristicas
        S, E, T
    
    todas iguais
    todas diferentes

    que questao dificil, revisar depois

*/
void solve() {
    cin>>n>>k;
    
    vector<string> v(n);
    uset<string> baralho;
    
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
        baralho.insert(v[i]);
    }

    ll qt = 0;

    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            string fantasma = "";

            for (ll pos = 0; pos < k; pos++) {

                if ( v[i][pos] == v[j][pos] ) {
                    fantasma += v[i][pos];
                }
                else {
                    char a = v[i][pos];
                    char b = v[j][pos];

                    if ( (a == 'S' && b == 'E') || (a == 'E' && b == 'S') ) {
                        fantasma += 'T';
                    }
                    else if ( (a == 'S' && b == 'T') || ( a == 'T' && b == 'S') ) {
                        fantasma += 'E';
                    }
                    else {
                        fantasma += 'S';
                    }
                }
            }
            if (baralho.count(fantasma)) {
                qt++;
            }
        }
    }

    cout << qt / 3 << el;

    

    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}