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
    ll N, x, number; cin>>N>>x;
    
    vl p(N);
    for( ll i=0; i < N; i++) {
        cin>>number;
        p[i] = number;
    }

    ll l = 0;
    ll soma_atual = 0;
    bool encontrado = false;

    for (int r = 0; r < N; r++) {
        soma_atual += p[r];

        while (soma_atual > x) {
            soma_atual -= p[l];
            l++;
        }

        if (soma_atual == x) {
            encontrado = true;
            break; 
        }
    }

    if (encontrado) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
}
int main() {
    ___
    
    solve();
    
    return 0;
}