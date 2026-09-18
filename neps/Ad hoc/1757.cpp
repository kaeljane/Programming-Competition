#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {
    ll n; cin>>n;
    ll qt = 1;
    while (n != 1) {
        if (n & 1) {
            n = n * 3 + 1;
        }
        else {
            n = n / 2; // n /= 2
        }
        qt++;
    }
    
    cout << qt << '\n';



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
