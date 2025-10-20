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
    string a, b; cin>>a>>b;
    ll t = a.size();
    string r, rr;
    bitset<128> b_a{string(a)};
    bitset<128> b_b{string(b)};
    bitset<128> b_r = b_a ^ b_b;
    r = b_r.to_string();
    
    ll c = 128 - t;
    
    for (ll i = c; i < 128; i++) rr.push_back(r[i]);

    cout << rr << '\n';
    

}
int main() {
    ___
    
    solve();
    
    return 0;
}