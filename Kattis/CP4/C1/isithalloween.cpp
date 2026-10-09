#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    presta atenção no output
*/

void solve() {
    string s;
    ll n;
    cin>>s>>n;
    
    if (s == "OCT" && n == 31 || s == "DEC" && n == 25 ) {
        cout << "yup" << '\n';
    }
    else {
        cout << "nope" << '\n';
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