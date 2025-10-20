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
// 19/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll n, qt=0, valor; cin>>n;
    vl v; // add aqui
    while (cin>>valor) v.push_back(valor);
    ll M = *max_element(all(v));
    ll m = *min_element(all(v));
    ll ind_m;

    //org o maior
    for (ll i = 0; i < n; i++) {
        if (v[i] == M) {
            for (ll j=i; j >=0 && M != v[0]; j--){
                swap(v[j], v[j-1]);
                qt++;
            }
            break;
        }
    }
    for (ll i = 0; i < n; i++) {
        if (v[i] == m) ind_m=i;
    }
    cout << qt + (n-1 - ind_m)<< '\n';
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}