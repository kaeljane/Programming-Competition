#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(x) x.begin(), x.end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 19/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll n, v; cin>>n;
    set<ll> c;
    ll cont=0;
    while (cin>>v){
        ll t = v;
        for (ll i=0; i < t; i++) {
            cin>>v;
            c.insert(v);
            // cout << v << ' ';
        }
        // cout << '\n';
    }
    // copy(all(c), ostream_iterator<ll> (cout, " ")); cout << '\n';
    if (c.size() == n) cout << "I become the guy." << '\n';
    else cout << "Oh, my keyboard!" << '\n';
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}