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
    vl v = {2, 2, 4, 5, 6, 7, 8, 9};
    ll n = v.size();
    sort(v.begin(), v.end());
    ll l = 0, r = n/2;
    ll tira = 0;

    for (; l<n/2 && r<n;) {
        if (v[l]*2 <= v[r]) {
            l++, r++;
            tira++;
        } else {
            r++;
        }
    }
    cout << n-tira << '\n';
    return 0;
}