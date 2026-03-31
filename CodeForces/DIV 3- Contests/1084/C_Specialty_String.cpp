#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 31/03/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    passa pf

*/

void solve(){
    cin>>n;
    cin>>s;
    
    if (n == 1) {
        cout << "NO" << el;
        return;
    }
    // a pilha precisa estar vazia no final
    stack<char> pilha;

    for (ll i = 0; i < n; i++) {
        if (pilha.size() == 0) {
            pilha.push(s[i]);
        }
        else {
            if (pilha.top() == s[i]) {
                pilha.pop();
            }
            else {
                pilha.push(s[i]);
            }
        }
    }

    if (pilha.size() == 0) {
        cout << "YES" << el;
    }
    else {
        cout << "NO" << el;
    }

    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}