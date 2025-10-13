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
// 10/10/2025 by Kaeljane
using namespace std;
// questao G
int main() {
    ___
    ll n, k; cin>>n>>k;
    ll resposta=1;
    ld impares = ceil(n/2);
    ll o = 0;
    // k = 5 | impares = 4
    if (k >= impares) {
        if (k % 2 != 0 && n % 2 == 0) o = 1;
        for (ll i = 0; i < floor(k/2.0) - o; i++){ // nao pode diminuir um aqui
            
            if (i == 0) resposta+=1;
            else resposta += 2;
            // cout << resposta << " ";
        }
    }
    else {
        for( ll j = 0; j < k-1 ; j++){
            resposta+=2;
        }
    }
    // cout << '\n';
    // fazer mais casos testes pq nao está passado o codigo e otimizar
    cout << resposta << '\n';

    return 0;
}