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
// 28/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    n brinquedos dispostos em uma fileira
    thoy quer separar os brinquedos
    Isa nao gosta de separar os brinquedos -- amigo dela deu uma varinha para ela separar
    ERRO AO CRIAR A VARINHA

    A VARINHA SO PODIA TROCAR DOIS BRINQUEDOS SE SEUS INTEIROS TIVEREM PARIDADE DIFERENTES

    OU SEJA UM É (PAR) E OUTRO (IMPAR) SO PODE TROCAR ASSIM

    2 3 1 4

    1 teste OK
    2 teste --
    3 teste OK (todos impares nao faça nada)
    4 teste OK (todos pares nao faça nada)
    5 teste -- (todos impares nao faça nada)
    6 teste OK (todos pares nao faça nada)


    5
    3 2 1 3 4
        i = 3
        p = 2
    impar - 1 = par
    3
    1 3 5
        i = 3
        p = 0

    Diferença de 1 em n(impar)


    5
    2 5 3 1 7
        i = 4
        p = 1
*/
void solve() {
    ll n;
    cin >> n;
    vl v(n); 
    ll par = 0;
    ll impar = 0;
    
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    if (par > 0 && impar > 0) {
        sort(all(v));
    } 
    for (ll i = 0; i < n; ++i) {
        cout << v[i] << (i == n - 1 ? "" : " "); 
    }
    cout << '\n';
}

int main() {
    ___
    ll t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}