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
// 22/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll t, valor; cin>>t;
    while(t--) {
        cin>>valor;
        if (1900 <= valor) cout << "Division 1" << '\n';
        else if (1600 <= valor) cout << "Division 2" << '\n';
        else if (1400 <= valor) cout << "Division 3" << '\n';
        else if (valor <= 1399) cout << "Division 4" << '\n';
    }
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}