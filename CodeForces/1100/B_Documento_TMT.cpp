// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 16/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    TMTMTMTMTMTMTMTMT
    
*/
void solve() {
    cin>>n;
    cin>>s;
    if (s[0] != 'T') {
        cout << "NO" << el;
        return;
    }


    // if (n/3 )

    map<char, int> mapa;
    vl vPosT;
    for (ll i=0; i<n; i++) {
        mapa[s[i]]++;
        if (s[i] == 'T') vPosT.push_back(i);
    }

    ll qtM = mapa['M'];
    ll qtT = mapa['T'];
    ll posVis=0;
    ll posVisFinal=vPosT.size()-1;
    if (qtM == n/3 && qtT == 2*n/3) {
        // cout << "YES" << el;
        // logica da esquerda
        for (ll i=0; i<n; i++) {
            if (s[i] == 'M') {
                if (vPosT[posVis] < i) {
                    posVis++;
                }
                else {
                    cout << "NO" << el;
                    posVis=0;
                    return;
                }
            }
        }

        // logica da direita
        for (ll i=s.size()-1; i>=0; i--) {
            if (s[i] == 'M') {
                if (vPosT[posVisFinal] > i) {
                    posVisFinal--;
                }
                else {
                    cout << "NO" << el;
                    posVisFinal=vPosT.size()-1;
                    return;
                }
            }
        }
        cout << "YES" << el;

    }
    else {
        cout << "NO" << el;
    }

    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}