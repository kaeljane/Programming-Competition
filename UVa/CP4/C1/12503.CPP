#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, x, p = 0; 
    string s, s2;
    cin>>n;
    vector<ll> v(n, 0);

    for (ll i = 0; i < n; i++) {
        cin>>s;
        if (s == "LEFT") {
            v[i] = -1;
        }
        else if (s == "RIGHT"){
            v[i] = 1;
        }
        else {
            cin>>s2>>x;  x--;
            v[i] = v[x];
        }
    }

    for (ll i = 0; i < n; i++) {
        p += v[i];
    }

    cout << p << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}