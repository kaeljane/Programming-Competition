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

ll n, t, k, x, y, z, ans;
string a, b, c;
char s;
/* (mind) 
    Time: 7min
    Padrão: loop, condicoes
    
*/
void solve() {
    cin>>n;
    ll qtAndressa = 0, qtBianca = 0;
    
    f (i, 0, n) {
        cin>>s;
        if (i&1) { // Bianca
            if (s == 'C') {cout << "BIANCA" << el; return;}
            if (s == 'A') qtBianca = 0;
            if (s >= '0' && s <= '9') {
                qtBianca += (s - '0');
            }
            else {
                qtBianca += 10;
            }
        }
        else { // Andressa
            if (s == 'C') {cout << "ANDRESSA" << el; return;}
            if (s == 'A') qtAndressa = 0;
            if (s >= '0' && s <= '9') {
                qtAndressa += (s - '0');
            }
            else {
                qtAndressa += 10;
            }
        }
    }

    if (qtBianca == qtAndressa) {
        cout << "EMPATE" << el;
    }
    else if (qtBianca > qtAndressa) {
        cout << "BIANCA" << el;
    }
    else {
        cout << "ANDRESSA" << el;
    }
    
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}