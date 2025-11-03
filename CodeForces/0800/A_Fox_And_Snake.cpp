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
// 20/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll l, c, count=0; cin>>l>>c;
    for (ll i = 0; i < l; i++) {
        if (i % 2 == 0){
            for (ll j=0; j<c; j++){
                cout << '#';
            }
            cout << '\n';
        }
        else {
            if ( count % 2 == 0) {
               for (ll j=0; j<c; j++){
                    if (j == c-1) cout << '#';
                    else cout << '.';
                    
                } 
                count++;
            }
            else    {
                for (ll j=0; j<c; j++){
                    if (j == 0) cout << '#';
                    else cout << '.';
                } 
                count++;
            }
            cout << '\n';
        }
    }
}
int main() {
    ___
    
    solve();
    
    return 0;
}