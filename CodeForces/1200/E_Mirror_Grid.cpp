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
// 30/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz 

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    voltar futuramente...
    usado template de rotacao de matriz...

*/
void rotate90w(vector<string>& matrix) {
    ll n = matrix.size();

    // transpor
    for (ll i = 0; i < n; ++i) {
        for (ll j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // inverter linha
    for (ll i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void solve() {
    cin>>n;
    
    vs mat0(n);
    for (ll i=0; i < n; i++) {
        cin>>mat0[i];
    }

    // copia original -> 90
    vs mat90 = mat0;
    rotate90w(mat90);

    // 90 -> 180
    vs mat180 = mat90;
    rotate90w(mat180);

    // 180 -> 270
    vs mat270 = mat180;
    rotate90w(mat270);

    ll ops = 0;

    // logic do problema :() dasjdkasjdka
    for (ll i = 0; i < n / 2; i++) {
        for (ll j = 0; j < (n+1) / 2; j++) {
            ll val1 = mat0[i][j] - '0';
            ll val2 = mat90[i][j] - '0';
            ll val3 = mat180[i][j] - '0';
            ll val4 = mat270[i][j] - '0';
        
            ll sum = val1 + val2 + val3 + val4;

            ops += min(sum, 4 - sum);
        }
    }

    cout << ops << el;



}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}