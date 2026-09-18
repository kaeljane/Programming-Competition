#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    83

*/

void solve() {
    ll x, total = 0; 
    vector<ll> v(6); 
    for (auto &x : v) {
        cin>>x;
        total += x;
    }

    sort(all(v));

    if (total & 1) {
        cout << "N" << '\n';
        return;
    }

    do {
        ll atual = v[0] + v[1] + v[2];

        if (atual == (total / 2)) {
            cout << "S" << '\n';
            return;
        }
        
    }
    while (next_permutation(all(v)));

    cout << "N" << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
