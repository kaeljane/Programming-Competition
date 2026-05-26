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
// 26/05/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    quem consegue encontrar o amarelinho primeiro?
    se chegar ao mesmo tempo o amarelinho foge

    mds quanta coisa pra ler

    caso nenhum consiga alcançar ele, ele tambem foge

    48min
    esqeuci a exclamacao ;-;

*/
void solve() {
    cin>>n;
    cin>>s;

    ll posA, posP, posC;
    
    f (i, 0, n) {
        if (s[i] == 'A') posA = i;
        else if (s[i] == 'C') posC = i;
        else if (s[i] == 'P') posP = i;
    }

    ll ansP = INF;
    ll qt = 0;

    // calcular primeiro a P
    if (posA < posP) {
        rf (i, posP, posA) {
            if (s[i] != 'X') qt++;
            else {qt = 0; break;}
        }
        if (qt != 0) ansP = min(ansP, qt-1);
    }
    else if (posA > posP) {
        f (i, posP, posA+1) {
            if (s[i] != 'X') qt++;
            else {qt = 0; break;}
        }
        if (qt != 0) ansP = min(ansP, qt-1);
    }

    ll ansC = INF;
    qt = 0;

    if (posA < posC) {
        rf (i, posC, posA) {
            if (s[i] != 'X') qt++;
            else {qt = 0; break;}
        }
        if (qt != 0) ansC = min(ansC, qt-1);
    }
    else if (posA > posC) {
        f (i, posC, posA+1) {
            if (s[i] != 'X') qt++;
            else {qt = 0; break;}
        }
        if (qt != 0) ansC = min(ansC, qt-1);
    }

    if (ansC == ansP) cout << "FUGIU!" << el;
    else if (ansC > ansP) cout << "P " << ansP << el;
    else if (ansC < ansP) cout << "C " << ansC << el;


}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}