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
    // ll n = 4, t = 5;
    // vl v = {3, 1, 2, 1};
    ll n = 5, t = 6;
    vl v = {3, 1, 2, 1, 1};

    ll livros = 0;
    ll l = 0, r = 0;
    ll intervalo = v[0];
    while(r<n){
        if (intervalo>t) {
            intervalo -= v[l];
            l++;
        }
        else {
            livros = max(livros, r-l+1);
            r++;
            if (r<n) {
                intervalo += v[r];
            }
        }
    }

    cout << livros << '\n';

    return 0;
}