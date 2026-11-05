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
// 13/10/2025 by Kaeljane
using namespace std;

bool ok(int x) {
    return x >= 70;
}

int main() {
    ___
    // essa busca nao é feito atraves de listas, ela pegara uma funcao e vai analisar a partir de quando ela é verdadeira
    ll left = 0;
    ll right = 100;
    ll ans = -1;

    while (left <= right) {
        ll mid = left + (right - left) / 2;
        
        if (ok(mid)) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    cout << "O menor valor 'k' e: " << ans << '\n';

    return 0;
}
