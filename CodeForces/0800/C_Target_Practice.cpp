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
// 12/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// 
// vl v(n); for (ll i=0; i<n; i++) cin>>v[i];

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    
    
*/
void solve() {

    vector<vector<char>> mat(10, vector<char>(10, '0'));
    ll ans=0;
    // inPUTAndo
    for (ll i=0; i<10; i++) {
        cin>>s;
        for (ll j=0; j<10; j++) {
            mat[i][j] = s[j];
        }
    }

    // vou fazer feio mesmo
    // 1
    // mat[0][0 - 9]
    for (ll i=0; i < 10; i++) {
        if (mat[0][i] == 'X') {
            ans += 1;
        }
    }

    // mat[1-9][9]
    for (ll i=1; i < 10; i++) {
        if (mat[i][9] == 'X') {
            ans += 1;
        }
    }
    // mat[9][0-8]
    for (ll i=0; i < 9; i++) {
        if (mat[9][i] == 'X') {
            ans += 1;
        }
    }

    // mat[1-9][0]
    for (ll i=1; i < 9; i++) {
        if (mat[i][0] == 'X') {
            ans += 1;
        }
    }

    // 2
    // mat[1][1 - 8]
    for (ll i=1; i < 9; i++) {
        if (mat[1][i] == 'X') {
            ans += 2;
        }
    }
    // mat[2-9][8]
    for (ll i=2; i < 9; i++) {
        if (mat[i][8] == 'X') {
            ans += 2;
        }
    }
    // mat[8][1-7]
    for (ll i=1; i < 8; i++) {
        if (mat[8][i] == 'X') {
            ans += 2;
        }
    }

    // mat[2-7][1]
    for (ll i=2; i < 8; i++) {
        if (mat[i][1] == 'X') {
            ans += 2;
        }
    }

    // 3
    // mat[2][2 - 7]
    for (ll i=2; i < 8; i++) {
        if (mat[2][i] == 'X') {
            ans += 3;
        }
    }
    // mat[3-7][7]
    for (ll i=3; i < 8; i++) {
        if (mat[i][7] == 'X') {
            ans += 3;
        }
    }
    // mat[7][2-6]
    for (ll i=2; i < 7; i++) {
        if (mat[7][i] == 'X') {
            ans += 3;
        }
    }

    // mat[3-6][2]
    for (ll i=3; i < 7; i++) {
        if (mat[i][2] == 'X') {
            ans += 3;
        }
    }
    // 4
    // mat[3][3 - 6]
    for (ll i=3; i < 7; i++) {
        if (mat[3][i] == 'X') {
            ans += 4;
        }
    }
    // mat[4-6][6]
    for (ll i=4; i < 7; i++) {
        if (mat[i][6] == 'X') {
            ans += 4;
        }
    }
    // mat[6][3-5]
    for (ll i=3; i < 6; i++) {
        if (mat[6][i] == 'X') {
            ans += 4;
        }
    }

    // mat[4-5][3]
    for (ll i=4; i < 6; i++) {
        if (mat[i][3] == 'X') {
            ans += 4;
        }
    }
    if (mat[4][4] == 'X') ans+=5;
    if (mat[4][5] == 'X') ans+=5;
    if (mat[5][4] == 'X') ans+=5;
    if (mat[5][5] == 'X') ans+=5;


    cout << ans << el;


}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}