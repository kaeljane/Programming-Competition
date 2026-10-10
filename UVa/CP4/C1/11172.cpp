#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll x, y; cin>>x>>y;

    if (x > y) cout << ">" << '\n';
    else if (x < y) cout << "<" << '\n';
    else cout << "=" << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}