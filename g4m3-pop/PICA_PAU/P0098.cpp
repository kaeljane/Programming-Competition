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

ll n, t, k, x, y, z, ans, soma1, soma2, soma3;
string s, a, b, c;

/* (mind) 
    Time: 16min 42sec
    Padrão: string 
    
    contra-senha

    ok pegar tudo menos o penultimo e ultimo
    ok pegar tudo menos o primeiro e o ultimo
    ok pegar tudo menos o primeiro e o segundo

    que seja assim 


*/
void solve() {
    cin>>s;
    n = s.size();

    string 
    s1, s11 = "", s12 = "", 
    s2, s21 = "", s22 = "",
    s3, s31 = "", s32 = "";
    
    
    f (i,0,n-2) {
        s1 += s[i];
    }
    s11 += s[n-2];
    s12 += s[n-1];

    soma1 += stoll(s1);
    soma1 += stoll(s11); soma1 += stoll(s12);

    f (i,1,n-1) {
        s2 += s[i];
    }
    s21 += s[0];
    s22 += s[n-1];

    soma2 += stoll(s2);
    soma2 += stoll(s21); soma2 += stoll(s22);
    
    f (i,2,n) {
        s3 += s[i];
    }

    s31 += s[0];
    s32 += s[1];

    soma3 += stoll(s3);
    soma3 += stoll(s31); soma3 += stoll(s32);

    cout << max({soma1, soma2, soma3}) << el;
    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}