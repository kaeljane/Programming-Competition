#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    

*/

void solve() {
    ll n; cin>>n;
    ll nenhum = (n-2)*(n-2)*(n-2);
    ll face1 = (n-2)*(n-2)*6;
    ll face2 = 12*(n-2);
    ll face3 = 8;

    cout << nenhum << '\n' 
    << face1 << '\n' << face2 
    << '\n' << face3 << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
