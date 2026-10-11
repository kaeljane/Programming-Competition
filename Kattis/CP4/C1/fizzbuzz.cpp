#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    gamer para ensinar sobre divisão!!
    x, y, n
    
    
*/

void solve() {
    ll x, y, n; cin>>x>>y>>n;
    
    for (ll i = 1; i <= n; i++) {
        // quando mudar algo pese no que poderia ser afetado!!
        if (i % x == 0 && i % y == 0) cout << "FizzBuzz" << '\n';
        else if (i % x == 0) cout << "Fizz" << '\n';
        else if (i % y == 0) cout << "Buzz" << '\n';
        else cout << i << '\n';
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