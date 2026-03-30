#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 30/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    tinha no template algo parecido lcs 
    37m 0s...

*/

constexpr int N = 25;
int dp[N][N];

void solve(){
    cin>>a>>b;

    if (a == b) {
        cout << 0 << el;
        return;
    }
    
    ll n = a.size(), m = b.size();
    ll maxTam = 0;

    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            if (a[i-1] == b[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                maxTam = max(maxTam, (ll)dp[i][j]);
            }
            else {
                dp[i][j] = 0;
            }
        }
    }


    cout << (n - maxTam) + (m - maxTam) << el;

    
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}