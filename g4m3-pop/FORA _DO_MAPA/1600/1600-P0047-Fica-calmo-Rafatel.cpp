#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 25/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z, a, b, c;
string s;

/* (mind )
    triplas pitagóricas
    escreva todas as triplas que nao possuam nenhum número maior que N.

    15min
*/

void solve(){
    cin>>n;

    bool tem = false;    
    for (ll a = 1; a <= n; a++) {
        for (ll b = a; b <= n; b++) {
            for (ll c = b; c <= n; c++) {
                if (c*c == (b*b + a*a)) {
                    cout << a << " " << b << " " << c << el;
                    tem = true;
                }
            }
        }    
    }

    if (!tem) {
        cout << "nenhuma tripla" << el;
    }
    
    
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}