#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
#define ld long double
using namespace std;

/*
    
*/
ll qt = 0;
void solve() {
    ld l, c, p, peso;
    cin>>l>>c>>p>>peso;
    if (((l <= 56 && c <= 45 && p <= 25) || (l + c + p) <= 125) && peso <= 7) {
        cout << 1 << '\n';
        qt++;
    }
    else {
        cout << 0 << '\n';
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t; 
    while (t--)
    solve();

    cout << qt << '\n';

    return 0;
}