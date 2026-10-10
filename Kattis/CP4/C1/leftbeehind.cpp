#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    x -> numero de doces 
    y -> numero de jars



*/

void solve() {
    ll x, y;
    while (cin>>x>>y) {
        if (x == 0 && y == 0) break;

        if(x + y == 13) cout << "Never speak again." << '\n';
        else if (y > x) cout << "Left beehind." << '\n';
        else if (x > y) cout << "To the convention." << '\n';
        else if (x == y) cout << "Undecided." << '\n';

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