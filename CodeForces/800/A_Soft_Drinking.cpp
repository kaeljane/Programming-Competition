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
    ll n, k, l, c, d, p, nl, np, r=0; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll mL = k*l, f_limao = c*d;
    
    for (ll i = 0; ; i++) {
        if (mL>=nl && f_limao >= 1 && p >= np) {
            mL-=nl;
            f_limao-=1;
            p-=np;
            r++;
        }
        else break;
    }
    cout << r/n << '\n';

}
int main() {
    ___
    
    solve();
    
    return 0;
}