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
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, " "))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 26/10/2025 by Kaeljane 
using namespace std;

ll n, t, k, x, y, z; 
string s, a, b, c;

/* (mind) 
    COMPLEXIDADE = O(sqrt(x))

    Verificar se x-1 é primo.
    Verificar se x+1 é primo.
    
    Se ambos forem primos, imprimir TIA, senão NAH.

*/
void solve() {
    cin >> x;

    ll num1 = x - 1;
    ll num2 = x + 1;

    bool num1_is_prime = true; 
    bool num2_is_prime = true; 

    if (num1 <= 1) {
        num1_is_prime = false;
    } else if (num1 > 2 && num1 % 2 == 0) { 
        num1_is_prime = false;
    } else if (num1 > 2) { 
        for (ll i = 3; (ll)i * i <= num1; i += 2) { 
            if (num1 % i == 0) {
                num1_is_prime = false;
                break; 
            }
        }
    }
    if (num2 <= 1) {
        num2_is_prime = false;
    } 
    else if (num2 > 2 && num2 % 2 == 0) {
        num2_is_prime = false;
    } 
    else if (num2 > 2) {
        for (ll i = 3; (ll)i * i <= num2; i += 2) {
            if (num2 % i == 0) {
                num2_is_prime = false;
                break;
            }
        }
    }

    cout << x << " "; 
    if (num1_is_prime && num2_is_prime) cout << "TIA" << '\n';
    else cout << "NAH" << '\n';
}

signed main() {
    ___
    t=1;
    // cin>>t;
    while(t--)solve(); 
    
    return 0;
}