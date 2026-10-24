#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/
ll cases = 1;
void solve() {
    string s, a; cin>>s>>a;
    ll qt0S = 0, qt1S = 0;
    ll qt0A = 0, qt1A = 0;
    ll interrogacao = 0;

    ll blocosSA = 0, blocosAS = 0;

    for (ll i = 0; i < s.size(); i++) {
        if (a[i] == '1') qt1A++;
        if (s[i] == '1') qt1S++;
        if (s[i] == '?') {
            interrogacao++;
        }
        else if (s[i] == '1' && a[i] == '0') {
            blocosSA++;
        }
        else if (s[i] == '0' && a[i] == '1') {
            blocosAS++;
        }
    }

    if (qt1A < qt1S) {
        cout << "Case " << cases << ": " << -1 << '\n';
        
    }
    else
        cout << "Case " << cases << ": " << interrogacao + min(blocosAS, blocosSA) + abs(blocosAS-blocosSA) << '\n';

    // sort(all(s)); sort(all(a));


    cases++;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    return 0;
}