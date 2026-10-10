#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    string s; cin>>s;

    if (s == "P=NP") {cout << "skipped" << '\n'; return;}

    string k, k2;
    ll posK = -1;
    for (ll i = 0; i < s.size(); i++)  {
        if (s[i] == '+'){ posK = i; break;}
        
        k += s[i];
    }

    for (ll i = posK + 1; i < s.size(); i++)  {        
        k2 += s[i];
    }

    ll n = stoll(k), n2 = stoll(k2);

    cout << n + n2 << '\n';

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}