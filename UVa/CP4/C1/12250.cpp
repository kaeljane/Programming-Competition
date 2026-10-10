#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    string s;
    ll n = 1;
    while (cin>>s) {
        if (s == "#") break;
        cout << "Case " << n << ": ";
        
        if (s == "HELLO") cout << "ENGLISH" << '\n';
        else if (s == "HOLA") cout << "SPANISH" << '\n';
        else if (s == "HALLO") cout << "GERMAN" << '\n';
        else if (s == "BONJOUR") cout << "FRENCH" << '\n';
        else if (s == "CIAO") cout << "ITALIAN" << '\n';
        else if (s == "ZDRAVSTVUJTE") cout << "RUSSIAN" << '\n';
        else cout << "UNKNOWN" << '\n';
        n++;
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