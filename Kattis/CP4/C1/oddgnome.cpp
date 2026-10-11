#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
    
*/

void solve() {
    ll n, x, ant = 0; cin>>n>>ant;
    ll posAns = -1; bool b = 0;
    for (ll i = 1; i < n; i++) {
        cin>>x;
        if (x-1 == ant) ant++;
        else {
            if (!b) {
                posAns = i+1;
                b = 1;
            }
        }
    }
    
    cout << posAns << '\n';
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}