#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    numero de pontos do participante

*/

void solve() {
    ll n, x; cin>>n;
    vector<ll> v;
    for (ll i = 0; i < n; i++) {
        cin>>x;
        if (x == 0) {
            if (!v.empty()) {
                v.pop_back();
            }
        }
        else {
            v.push_back(x);
        }
    }

    cout << accumulate(all(v), 0LL) << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
