#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 07/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, k, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    30m + 22m 32s
    Deveria ter feito mais rapido, mas a Kitty atrapalhou
*/

void solve(){
    cin>>x>>k;

    ll qt = 0;
    if (x == k) {
        cout << 0 << el;
    }
    else if (x > k) {
        // dividir ate chegar no numero 
        while (x % 2 == 0){
            if (x % 8 == 0 && x / 8 >= k) {
                x /= 8;
                qt++;
            }
            else if (x % 4 == 0 && x / 4 >= k) {
                x /= 4;
                qt++;
            }
            else if (x % 2 == 0 && x / 2 >= k) {
                x /= 2;
                qt++;
            }
            else if (x != k) {
                cout << -1 << el;
                return;
            }
            if (x == k) {
                cout << qt << el;
                return;
            }
            else if (x < k) {
                cout << -1 << el;
                return;
            }

        }
        cout << -1 << el;


    }
    else {
        // multiplicar até chegar no numero
        while (true) {
            ll vezes = 0;
            if (x * 8 <= k) {
                x *= 8;
                qt++;
            }
            else if (x * 4 <= k) {
                x *= 4;
                qt++;
            }
            else if (x * 2 <= k) {
                x *= 2;
                qt++;
            }
            else if (x != k) {
                cout << -1 << el;
                return;
            }
            if (x == k) {
                cout << qt << el;
                return;
            }
            else if (x > k) {
                cout << -1 << el;
                return;
            }
        }

    }

    
    
    
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}