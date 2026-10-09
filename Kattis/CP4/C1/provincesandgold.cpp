#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll g, s, c; cin>>g>>s>>c;

    ll totalPoder = (g*3) + (s*2) + c;

    string v = "", t = "";
    if (totalPoder >= 8) {
        v = "Province";
    }
    else if (totalPoder >= 5) {
        v = "Duchy"; 
    }
    else if (totalPoder >= 2) {
        v = "Estate";
    }

    if (totalPoder >= 6) t = "Gold";
    else if (totalPoder >= 3) t = "Silver";
    else t = "Copper";

    if (v == "") {
        cout << t << '\n';
    }
    else {
        cout << v << " or " << t << '\n';
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}