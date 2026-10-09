#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, x, uso; cin>>x>>n;
    ll qtSob = 0;
    
    for (ll i = 0; i < n; i++) {
        cin>>uso;
        qtSob += x - uso;
    }

    cout << qtSob + x << '\n';
    // acho que já estou ficando cansada so pode


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}