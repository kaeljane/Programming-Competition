#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(x) x.begin(), x.end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 16/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll n, passos=0; cin>>n;
    string n_s = to_string(n);
    ll t = n_s.size();

    if (t == 6) {
        // 19.999
        // 999.995 + 4
        passos += n/5;
        n = n%5;
    }
    else if (t == 5) {
        passos += n/5;
        n = n%5;
    }
    else if (t == 4) {
        passos += n/5;
        n = n%5;
    }
    else if (t == 3) {
        passos += n/5;
        n = n%5;
    }
    else if (t == 2) {
        passos += n/5;
        n = n%5;
    }
    while (n != 0) {
        // 999.990 + 9
        if (n % 5 == 0) {
            passos++;
            n-=5;
        }
        else if (n % 4 == 0) {
            passos++;
            n-=4;
        }
        else if (n % 3 == 0){
            passos++;
            n-=3;
        }
        else if (n % 2 == 0) {
            passos++;
            n-=2;
        }
        else if (n % 1 == 0) {
            passos++;
            n-=1;
        }
    }
    cout << passos << '\n';
    
}
int main() {
    ___
    
    solve();
    
    return 0;
}