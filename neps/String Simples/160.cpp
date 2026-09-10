#include <bits/stdc++.h>
#define ll long long
#define all(v) (v).begin(), (v).end()
using namespace std;

int main() {
    ll n, ans = 0; string a, b;
    cin>>n>>a>>b;

    for (ll i = 0; i < n; i++) {
        if (a[i] == b[i]) ans++;
    }

    cout << ans << '\n';

    return 0;
}