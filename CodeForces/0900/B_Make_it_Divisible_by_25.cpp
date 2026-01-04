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
// 03/01/2026 by Kaeljane
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
    cin>>s;
    ll t = s.size();

    if (s[t-2] == '0' && s[t-1] == '0') {
        cout << 0 << el;
        return;
    }
    else if (s[t-2] == '2' && s[t-1] == '5') {
        cout << 0 << el;
        return;
    }
    else if (s[t-2] == '5' && s[t-1] == '0') {
        cout << 0 << el;
        return;
    }
    else if (s[t-2] == '7' && s[t-1] == '5') {
        cout << 0 << el;
        return;
    }
    ii parzinIndex1 = {INF, INF};
    bool first = false;
    if (s.find('0') != string::npos){
        for (ll i=t-1; i>=0; i--) {
            // tentando procurar o 00
            if (s[i] == '0' && !first) {
                parzinIndex1.second = i;
                first = true;
            }
            else if (first && s[i] == '0') {
                parzinIndex1.first = i;
                break;
            }
        }
    }
    // se nao tiver o numero entao simplesmente o valor será infinito
    ii parzinIndex2 = {INF, INF};
    first = false;
    if (s.find('2') != string::npos && s.find('5') != string::npos){
        for (ll i=t-1; i>=0; i--) {
            // tentando procurar o 25
            if (s[i] == '5' && !first) {
                parzinIndex2.second = i;
                first = true;
            }
            if (first && s[i] == '2') {
                parzinIndex2.first = i;
                break;
            }
        }
    }

    ii parzinIndex3 = {INF, INF};
    first = false;
    if (s.find('5') != string::npos && s.find('0') != string::npos){
        for (ll i=t-1; i>=0; i--) {
            // tentando procurar o 50
            if (s[i] == '0' && !first) {
                parzinIndex3.second = i;
                first = true;
            }
            if (first && s[i] == '5') {
                parzinIndex3.first = i;
                break;
            }
        }
    }

    ii parzinIndex4 = {INF, INF};
    first = false;
    if (s.find('7') != string::npos && s.find('5') != string::npos){
        for (ll i=t-1; i>=0; i--) {
            // tentando procurar o 75
            if (s[i] == '5' && !first) {
                parzinIndex4.second = i;
                first = true;
            }
            if (first && s[i] == '7') {
                parzinIndex4.first = i;
                break;
            }
        }
    }

    // parzinIndex1 parzinIndex2 parzinIndex3 parzinIndex4
    vector<ll> ans = {INF};
    ll ans1 = INF;
    if (parzinIndex1.first != INF && parzinIndex1.second != INF) {
        ans1 = 0;
        ans1 += abs((t-1) - parzinIndex1.second);
        ans1 += abs((parzinIndex1.second - 1) - parzinIndex1.first);
        ans.pb(ans1);
    }

    ll ans2 = INF;
    if (parzinIndex2.first != INF && parzinIndex2.second != INF) {
        ans2 = 0;
        ans2 += abs(parzinIndex2.second - (t-1));
        ans2 += abs((parzinIndex2.second - 1)- parzinIndex2.first);
        ans.pb(ans2);
    }

    ll ans3 = INF;
    if (parzinIndex3.first != INF && parzinIndex3.second != INF) {
        ans3 = 0;
        ans3 += abs((t-1) - parzinIndex3.second);
        ans3 += abs((parzinIndex3.second - 1) - parzinIndex3.first);
        ans.pb(ans3);
    }

    ll ans4 = INF;
    if (parzinIndex4.first != INF && parzinIndex4.second != INF) {
        ans4 = 0;
        ans4 += abs((t-1) - parzinIndex4.second);
        ans4 += abs((parzinIndex4.second - 1) - parzinIndex4.first);
        ans.pb(ans4);
    }
    if (min_el(ans) != INF) cout << min_el(ans) << el;
    else {
        cout << t << el;
    }
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}