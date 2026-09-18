#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    quantas escadinhas existem na sequencia

    a diferença é a mesma

    quantas escadinhas existem?

    se uma escadinha é um pedaço de outra, 
    cosideramos somente a maior.

    tem que fazer dois for

    
    
*/

void solve() {
    ll n, x, ansTotal = 0;
    cin>>n;
    vector<ll> v(n);

    if (n == 1) {cout << 1 << '\n'; return;}

    
    for (ll i = 0; i < n; i++) {
        cin>>v[i];
    }

    ll diff = v[0] - v[1];
    
    bool escada = 0;
    v.push_back(1000000000);
    
    for (ll i = 2; i < n+1; i++) {
        if (diff != v[i-1] - v[i]) {
            ansTotal++; 
        }
        diff = v[i-1] - v[i];
    }

    cout << ansTotal << '\n';




}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
