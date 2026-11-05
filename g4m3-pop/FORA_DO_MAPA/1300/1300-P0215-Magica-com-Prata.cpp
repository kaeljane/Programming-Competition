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
// 15/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll N, M;
    cin >> N >> M;

    vl p(N);
    for (ll i = 0; i < N; i++) {
        cin >> p[i];
    }

    ll xor_sum = 0;
    for (ll i = 0; i < M; i++) {
        xor_sum ^= p[i];
    }
    
    ll max_xor_sum = xor_sum;

    for (ll r = M; r < N; r++) {
        ll l_index = r - M;

        xor_sum = xor_sum ^ p[l_index] ^ p[r];

        max_xor_sum = max(max_xor_sum, xor_sum);
    }

    cout << max_xor_sum << endl;
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}