#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

string resp(ll a, ll b) {
    string aa = to_string(a), bb = to_string(b);
    
    reverse(all(aa)), reverse(all(bb)); 
    
    if (aa >= bb) return aa;
    else return bb;
    
}

void solve() {
    ll a, b; cin>>a>>b;
    
    cout << resp(a, b) << '\n';
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}