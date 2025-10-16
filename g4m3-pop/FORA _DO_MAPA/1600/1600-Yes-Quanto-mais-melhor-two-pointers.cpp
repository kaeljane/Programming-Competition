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
    int n;
    cin >> n;
    string s;
    cin >> s;

    string padrao = "yes";
    int ponteiro_alvo = 0;
    int yes_count = 0;

    for (int ponteiro_s = 0; ponteiro_s < n; ++ponteiro_s) {
        if (s[ponteiro_s] == padrao[ponteiro_alvo]) {
            ponteiro_alvo++;
            if (ponteiro_alvo == 3) {
                yes_count++;
                ponteiro_alvo = 0;
            }
        }
    }

    cout << yes_count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
