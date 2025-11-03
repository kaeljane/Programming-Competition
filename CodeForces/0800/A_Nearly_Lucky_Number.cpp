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
// 17/10/2025 by Kaeljane
using namespace std;

void solve() {
    string n; cin>>n;
    set<char> conj = {4, 7};
    set<char> aux;
    map<char, int> mapa;
    ll qt=0;

    for (ll i = 0; i < n.size(); i++) {
        mapa[n[i]]++;
    }
    for (auto x : mapa) {
        if (x.first == '4' || x.first == '7') qt+=x.second;
    }
    // 7 47
    string aux_s = to_string(qt);
    if (aux_s.size() == 1) {
        if (qt == 4 || qt == 7) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    else {
        for (auto x : aux_s) {
            aux.insert(x);
            // cout << x << " ";
        }
        if (conj == aux) cout << "YES\n";
        else cout << "NO\n";
    }
    

    
}
int main() {
    ___
    
    solve();
    
    return 0;
}