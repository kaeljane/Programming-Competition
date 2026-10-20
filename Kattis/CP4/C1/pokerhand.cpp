#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    string a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;

    map<char, ll> mp;

    mp[a[0]]++;
    mp[b[0]]++;
    mp[c[0]]++;
    mp[d[0]]++;
    mp[e[0]]++;

    pair<char, ll> maximooo = {'0', 0};
    for (auto & x : mp) {
        if (x.second > maximooo.second) {
            maximooo.first = x.first;
            maximooo.second = x.second;
        }
    }

    cout << maximooo.second << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}