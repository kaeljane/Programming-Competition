#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    nao pode ter uma distancia maior que D

*/

void solve() {
    ll n, d; cin>>n>>d;
    string s; cin>>s;

    // 0-based
    vector<ll> pref(n, 0);
    vector<ll> suf(n, 0);

    ll atual = INT_MAX;

    for (ll i = 0; i < n; i++) {
        if (s[i] == 'B') {
            atual = 0;
        }
        else {
            atual++;
        }
        
        pref[i] = atual;
    }
    atual = INT_MAX;

    for (ll i = n-1; i >= 0; i--) {
        if (s[i] == 'B') {
            atual = 0;
        }
        else {
            atual++;
        }
        
        suf[i] = atual;
    }

    for (ll i = 0; i < n; i++) {
        if (min(pref[i], suf[i]) > d) {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

  
    return 0;
}