#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 08/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    ll n; cin>>n;
    ll a, b, c;
    ll qt = 0;
    for (ll i = 0; i < n; i++) {
        cin>>a>>b>>c;
        ll soma = a+b+c;
        if (soma >= 2) {
            qt +=1;
        }
    }
    cout << qt <<'\n';
    
}