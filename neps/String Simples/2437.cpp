#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    maior prefixo que é comum nas duas sequencias

*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, ans=0; string a, b;

    cin>>n>>a;
    cin>>m>>b;
    
    for (ll i = 0; i < max(n, m); i++) {
        if (i < n && i < m) {
            if (a[i] == b[i]) {
                ans++;
            }
            else {
                break;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
