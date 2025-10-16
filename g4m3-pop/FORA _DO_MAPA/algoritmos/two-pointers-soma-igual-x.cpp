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
// 14/10/2025 by Kaeljane
using namespace std;

int main() {
    ___
    bool tem = false;
    vl v = {1, 3, 4, 6, 8, 12};
    ll x; cin>>x;
    ll n = v.size();
    int l = 0, r = n-1;

    while(l < r) {
        if (v[l] + v[r] == x) {
            cout << "A soma de " << v[l] << " e " << v[r] << " é igual a " << x;
            tem = true;
            break;
        }
        else if (v[l] + v[r] < x) {
            l++;
        }
        else if (v[l] + v[r] > x) {
            r--;
        }
    }



    return 0;
}