#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    

*/

void solve() {
    ll n, x; cin>>n;
    
    ll qt = 1;
    
    for (ll i = 1; i <= n; i++) qt *= i; qt--;

    set<vector<ll>> cj;
    
    for (ll i = 0; i < qt; i++) {
        vector<ll> v;
        for (ll j = 0; j < n; j++) {
            cin>>x;
            v.push_back(x);
        }

        cj.insert(v);
    }

    
    vector<ll> inicial;
    for (ll i = 1; i <= n; i++) {
        inicial.push_back(i);
    }
    
    set<vector<ll>> cjj;
    do {
        cjj.insert(inicial);
    }
    while (next_permutation(all(inicial)));

    for (auto &x : cjj) {
        if (!cj.count(x)) {
            for (auto &y : x) {
                cout << y << " ";
            }
            cout << '\n';
            return;
        }
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
