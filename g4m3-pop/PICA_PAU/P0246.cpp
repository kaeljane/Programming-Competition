// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
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
// 14/08/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
string s, a, b, c;

/* (mind) 
    Time: 27min 30sec
    Padrão: 
    
    Summarize(resumir/descrever):
        - imprimir o nome da vencedora
        - N sempre par
        - turnos alternados
        - letra minuscula vale o dobro
        
    Deduce(deduzir/derivar/testar):
        
        
    Solve(resolver/programar):
    Change(TLE, WA):
        
*/
void solve() {
    cin>>n>>s;
    ans = 0;

    ll qtA=0, qtB=0;

    map<char, ll> mp;
    mp['A'] = 12, mp['B'] = 97, mp['C'] = 31, mp['D'] = 44,
    mp['E'] = 16, mp['F'] = 17, mp['G'] = 22, mp['H'] = 87,
    mp['I'] = 10, mp['J'] = 61, mp['K'] = 70, mp['L'] = 33,
    mp['M'] = 59;
    char cAnt = 'Z' + 1;
    f (i, 0, n) {
        if (i & 1) { // bia
            if (s[i] == cAnt) {
                if (mp.find(s[i]) != mp.end()) {
                    qtB += mp[s[i]] * 3;
                }
                else {
                    qtB += mp[s[i] - 32] * 2 * 3;
                }
            }
            else if (mp.find(s[i]) != mp.end()) {
                qtB += mp[s[i]];
            }
            else {
                qtB += mp[s[i] - 32] * 2;
            }
        }
        else {
            if (s[i] == cAnt) {
                if (mp.find(s[i]) != mp.end()) {
                    qtA += mp[s[i]] * 3;
                }
                else {
                    qtA += mp[s[i] - 32] * 2 * 3;
                }
            }
            else if (mp.find(s[i]) != mp.end()) {
                qtA += mp[s[i]];
            }
            else {
                qtA += mp[s[i] - 32] * 2;
            }

        }
        cAnt = s[i];
    }
    // cout << qtB << " " << qtA << el;
    if (qtB > qtA) cout << "BIA" << el;
    else cout << "ANDRESSA" << el;

    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}