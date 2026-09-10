#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*

*/
int main() {
    ll k, n; string a, b;
    cin>>k>>n>>a>>b;

    set<char> cj;
    for (ll i = 0; i < k; i++) cj.insert(a[i]);

    bool bb = 0;
    for (ll i = 0; i < n; i++) {
        if (!cj.count(b[i])) {
            cout << "N" << '\n';
            bb = 1;
            break;
        }
    }

    if (!bb) cout << "S" << '\n';


    return 0;
}
