#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;
/*
    anagrama, sim ou nao
*/

void solve() {
    ll n; string a, b;
    cin>>n; cin.ignore();
    getline(cin, a);
    getline(cin, b);

    map<char, ll> m1;
    map<char, ll> m2;
    
    for (ll i = 0; i < n; i++) {
        if (isalpha(a[i])) 
            m1[a[i]]++;
        if (isalpha(b[i]))
            m2[b[i]]++;
    }

    // olhar qt também!
    for (auto x : m1) { 
        if (m2[x.first] != m1[x.first]) {
            cout << "N" << '\n';
            return;
        }
    }
    cout << "S" << '\n';

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}
