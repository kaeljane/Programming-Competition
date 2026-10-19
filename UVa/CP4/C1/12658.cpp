#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n;
    cin>>n;
    vector<string> mat(5);
    for (ll i = 0; i < 5; i++) {
        cin>>mat[i];
    }

    string linha = mat[3];

    for (ll i = 0; i < n; i++) {
        ll inicio = i * 4;

        if (linha[inicio] == '*') {
            cout << "2";
        }
        else if (linha[inicio+1] == '*') {
            cout << "1";
        }
        else if (linha[inicio+2] == '*') {
            cout << "3";
        }
        
    }
    cout << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}