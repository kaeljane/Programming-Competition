#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    lcm

*/

void solve() {
    ll x, y; cin>>x>>y;

    cout << lcm(x, y) << '\n';
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

  
    return 0;
}