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
// 03/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    28min 9sec
    
*/
void solve() {
    cin>>s;
    
    vector<ll> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }

    ll letras_impares = 0;

    f (i, 0, 26) {
        if (freq[i] % 2 != 0) {
            letras_impares++;
        }
    }

    if(letras_impares > 1) {
        cout << "NO SOLUTION" << el;
        return;
    }

    string metade_esquerda = "";
    string miolo = "";

    f (i, 0, 26) {
        if (freq[i] % 2 != 0) {
            miolo = string(freq[i], i + 'A');
        }
        else if (freq[i] > 0) {
            metade_esquerda += string(freq[i] / 2, i + 'A');
        }
    }

    string metade_direita = metade_esquerda;
    reverse(all(metade_direita));

    cout << metade_esquerda << miolo << metade_direita << el;


    
}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}