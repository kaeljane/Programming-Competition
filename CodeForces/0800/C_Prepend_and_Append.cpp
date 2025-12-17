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
    
    
*/
void solve() {
    cin>>n;
    if (n == 0) {cout << n << el; return;}
    cin>>s;

    // 3/2 == 1
    ll p, q, qt;
    if (n % 2 != 0) {
        p = q = (int)(n/2);
    }
    else {
        p = (int)(n/2) -1;
        q = (int)(n/2);
    }
    bool inicio=true;
    bool pare=false;
    ii coord;
    while (pare==false) {
        if ((s[p] == '0' && s[q] == '1') || (s[p] == '1' && s[q] == '0')) {
            // cout << qt << el;
            if (inicio) {
                coord = {p, q};
                inicio = false;
            }
            // qt+=2;
        }
        else {
            // tem que zerar e começar a contar de novo
            // precisamos de uma variavel para guardar a ultima coordenada 0, 1 || 1, 0
            inicio = true;
        }
        if ((p < 0 ) || (q >= n)) {
            if ((s[0] == '0' && s[n-1] == '1') || (s[0] == '1' && s[n-1] == '0')) cout << coord.second - coord.first - 1 << el;
            else cout << n << el;
            pare = true;
        }
        p--;
        q++;
    }
    
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}