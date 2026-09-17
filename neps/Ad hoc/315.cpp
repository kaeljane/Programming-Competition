#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {
    ll n; cin>>n; 
    
    if (n == 0) {
        cout << "N" << '\n';
        return;
    }
    
    n++;
    if ((n & (n - 1)) == 0) cout << "S" << '\n';
    else cout << "N" << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
