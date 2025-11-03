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
// 21/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll t, n, r, c; cin>>t;
    vl v;
    while (t--) {
        cin>>n;
        for (ll i=10000; i >= 10; i/=10) {
            if (n/i>0) {
                c = (n/i) * i;
                n-=c;
                v.push_back(c);
            }
        }
        if (n != 0 && n < 10) v.push_back(n);

        cout << v.size()<<'\n';
        copy(all(v), ostream_iterator<ll> (cout, " ")); cout<<'\n';
        v.clear();
        
    } 

    
}
int main() {
    ___
    
    solve();
    
    return 0;
}