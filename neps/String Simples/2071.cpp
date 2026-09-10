#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    s: soma do valor dos digitos.

*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, s;
    cin>>n>>m>>s;

    bool b=1;
    for (ll i = m; i >= n; i--) {
        string k = to_string(i);
        ll soma = 0;

        for (ll j = 0; j < k.size(); j++) {
            soma += k[j] - '0';
        }
        
        if (soma == s) {
            cout << i << '\n';
            b = 0;
            break;
        }
    }

    if (b) cout << -1 << '\n';

    return 0;
}
