#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll a,b,c,n; cin>>a>>b>>c>>n;
    ll qt = a+b+c;
    if (a > 0 && b > 0 && c > 0 && qt >= n && n >= 3) {
        cout << "YES" << '\n';
    }
    else cout << "NO" << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}