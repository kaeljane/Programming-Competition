#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, t; cin>>n>>t;
    vector<ll> a(n); for (ll i = 0; i < n; i++) cin>>a[i];
    
    if (t == 1) {
        cout << 7 << '\n';
    }
    else if (t == 2) {
        if (a[0] > a[1]) cout << "Bigger" << '\n';
        else if (a[0] == a[1]) cout << "Equal" << '\n';
        else cout << "Smaller" << '\n';
    }
    else if (t == 3) {
        vector<ll> v = {a[0], a[1], a[2]};
        sort(all(v));
        cout << v[1] << '\n';
    }
    else if (t == 4) {
        cout << accumulate(all(a), 0LL) << '\n';
    }
    else if (t == 5) {
        ll soma = 0;
        for (ll i = 0; i < n; i++) {
            if (!(a[i]&1)) {
                soma += a[i];
            }
        }
        cout << soma << '\n';
    }
    else if (t == 6) {
        // vector<ll> v = a;
        for (auto &x : a) {
            x = x % 26;
        }
        for (ll i = 0; i < n; i++) {
            char c = a[i] + 'a'; 
            cout << c;
        }
        cout << '\n';
    }
    else if (t == 7) {
        ll i = 0;
        vector<bool> vis(n, 0);
        
        while (1) {
            vis[i] = 1;

            i = a[i];

            if (i >= n || i < 0) {
                cout << "Out" << '\n';
                return;
            }

            else if (i == n - 1) {
                cout << "Done" << '\n';
                return;
            }
            else if (vis[i]) {
                cout << "Cyclic" << '\n';
                return;
            }

        }
        
        
    }
    else {
        cout << "helloworld" << '\n';
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}