#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll l;

    while (cin >> l && l != 0) {
        string atual = "+x";

        for (ll i = 0; i < l - 1; i++) {
            string dobra; cin>>dobra;

            if (dobra == "No") continue;

            if (atual == "+x") {
                atual = dobra;
            }
            else if (atual == "-x") {
                if (dobra == "+y") atual = "-y";
                else if (dobra == "-y") atual = "+y";
                else if (dobra == "+z") atual = "-z";
                else if (dobra == "-z") atual = "+z";
            }
            else if (atual == "+y") {
                if (dobra == "+y") atual = "-x";
                else if (dobra == "-y") atual = "+x";
            }
            else if (atual == "-y") {
                if (dobra == "+y") atual = "+x";
                else if (dobra == "-y") atual = "-x";
            }
            else if (atual == "+z") {
                if (dobra == "+z") atual = "-x";
                else if (dobra == "-z") atual = "+x";
            }
            else if (atual == "-z") {
                if (dobra == "+z") atual = "+x";
                else if (dobra == "-z") atual = "-x";
            }
        }
        cout << atual << '\n';

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