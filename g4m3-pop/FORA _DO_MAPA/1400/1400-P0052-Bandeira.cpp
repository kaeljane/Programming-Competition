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
    ll n, resposta=0;
    cin >> n;
    string s;
    cin >> s;

    if (n <= 2) {
        resposta = n;
    }

    int l = 0; 
    int big_size = 0;
    
    map<char, int> count_c;

    for (int r = 0; r < n; ++r) {
        char cor_r = s[r];
        count_c[cor_r]++;

        while (count_c.size() > 2) {
            char cor_esquerda = s[l];
            
            count_c[cor_esquerda]--;
            if (count_c[cor_esquerda] == 0) {
                count_c.erase(cor_esquerda);
            }
            
            l++;
        }
        int size_at = r - l + 1;
        big_size = max(big_size, size_at);
    }
    if (resposta) {cout << resposta << '\n';}
    else cout << big_size << '\n';

    
}
int main() {
    ___
    
    solve();
    
    return 0;
}