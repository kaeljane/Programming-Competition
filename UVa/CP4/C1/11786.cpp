#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    string s; cin>>s; ll n = s.size();
    
    ll qtTotal = 0;
    stack<ll> descidas; // pilha

    for (ll i = 0; i < n; i++) {
        if (s[i] == '\\') {
            descidas.push(i);
        }
        else if (s[i] == '/') {
            if (!descidas.empty()) {
                ll j = descidas.top();
                descidas.pop();

                qtTotal += (i - j);
            }    
        }
        
    }

    cout << qtTotal << '\n';



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}