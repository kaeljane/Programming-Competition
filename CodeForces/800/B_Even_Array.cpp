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
// 29/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        não existe números negativos na array
        0 1 2 3...
        array good?
        trocar elementos de lugar p/ q se torne good
        
        0 1 2 3  -> indices errados
        indices pares -> precisa ter numeros pares
        indices impares -> precisa ter numeros impares

        4 9 2 1 18 3 0
                p = 4
                i = 3

        3 2 7 6
                p = 2
                i = 2

        3 2 6
                p = 2
                i = 1
        
        
*/
void solve() {
        cin>>n;
        vl v = {};
        for (ll i=0; i<n; i++) {
                cin>>x;
                v.push_back(x);
        }
        ll aux=0;
        vl no_good = {};
        for (ll i=0; i<n; i++) {
                if (v[i] % 2 == i % 2);
                else {
                        aux+=1; // qt de errados
                        // add indices que não são bons!!
                        no_good.push_back(i); 
                }
        }
        ll par_valor = 0;
        ll impar_valor = 0;

        ll par_ind = 0;
        ll impar_ind = 0;
        for (ll j=0; j<no_good.size(); j++) {
                if (v[no_good[j]] % 2 == 0) par_valor++;
                else if (v[no_good[j]] % 2 != 0) impar_valor++;
                if (no_good[j] % 2 == 0) par_ind++;
                else if (no_good[j] % 2 != 0) impar_ind++;
        }
        if (par_valor == par_ind && impar_valor == impar_ind) {
                cout << par_valor << '\n';
        }
        else cout << -1 << '\n';
        
}
signed main() {
        ___
        t=1;
        cin>>t;
        while(t--)solve();
        
        return 0;
}