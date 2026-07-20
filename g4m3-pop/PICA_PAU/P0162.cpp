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
// 20/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans, qtLetrasMaiusculas, qtLetraMinusculas, qtNumeros, qtCaract;
string s, a, b, c;

/* (mind) 
    Time: 6min 37sec
    Padrão: condicoes
    
*/
void solve() {
    cin>>s;

    set<char> conj;
    if (s.size() >= 10) {
        f (i, 0, s.size()) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                qtLetraMinusculas++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                qtLetrasMaiusculas++;
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                qtNumeros++;
            }
            else {
                qtCaract++;
            }
            conj.insert(s[i]);
        }

        if (conj.size() == s.size() && 
            qtLetraMinusculas >= 2 && 
            qtLetrasMaiusculas >= 2 && 
            qtNumeros >= 2 && 
            qtCaract >= 2
        ) cout << "S" << el; 
        else cout << "N" << el;
    }
    else {
        cout << "N" << el;
    }
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}