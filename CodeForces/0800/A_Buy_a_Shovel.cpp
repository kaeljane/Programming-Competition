#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) v.begin(), v.end()
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ' '))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 22/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll k, r, resposta=0; cin>>k>>r;
    ll at=k;
    ll resto = k % 10;
    if (resto == 5) {
        // abs(r-resto);
        // 0 - 2 = 2
        // 2 é menor que 5?
        // r = 6, 
        if (r < (5 - 2)) r = 0;
        else  r = 0;
    }
    else if (resto == 0) {
        r=0;
    }
    for (int i = 1;  ; i++) {
        if ((k * i) % 10 == r) {
            resposta++;
            break;
        }
        else resposta++;
    }
    
    cout << resposta << '\n';
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}