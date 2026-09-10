#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; string s;
    cin>>n>>s;

    ll c = 1;
    for (ll i = 1; i < n; i++) {
        if (s[i] == s[i-1]) c++;
        else {
            cout << c << " " << s[i-1] << " ";
            c = 1;
        }
    }
    cout << c << " " << s[n-1] << '\n';

    return 0;
}
