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
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 13/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        todos os inteiros impares entre 1 a n
        todos os inteiro pares entre 1 a n

        {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}

        tentando achar padroes
        n / resultado
        par -> impar
        impar -> par

        se n(par) :
                mesma quant de impares e pares
        
        PA
        razão(2) (numeros impares) começando em 1

        n = a1 + (n - 1)*r
        An = 1 + (10-1)*2
        An = 1 + 9*2
        An = 1 + 18
        An = 19

        n = 1 + (i - 1)*2
        9 = (n-1)*2
        9/2 = n - 1
        n = 9/2 + 1 
        n = 9/2 + 1
        [n = 5]

        (i - 1) = (n-1) /2
        i = ((n-1)/2) + 1
        i = ((n-2)/2) + 1

        PARA NUMEROS IMPARES
        formula PA
        An = a1 + (n - 1)*r
        An = 1 + (3 - 1)*2
        An = 1 + 2*2
        [An = 5]
        
        {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}
        {1, 3, 5, 7, 2, 4, 6}

        An = a1 + (n - 1)*r
        7 = 1 + (n - 1)*2
        6 = (n - 1 )* 2
        n - 1 = 3
        [n = 4 ]                está indice 4 (indice começa com 1)

        (n - 1) * 2 = n - 1
        (i - 1)= (n - 1) /2
        i = (n -1)/2 + 1

        i = (7 - 1)/2 + 1
        i = 6/3 + 1
        i = 4 
        ind_correto = k - i == 3

        {1, 3, 5, 7, 2, 4, 6}

        if ( k <= qt_ind_impar) 

        

        se o resultado for par então vc precisa de qualquer forma a subtraçãoa!!!!

        n(par)   k (pares)   
        n(par)   k (impares) **
        n(impar) k (impares) **
        n(impar) k (pares)
        
        {1, 3, 5, 7, 2, 4, 6, 8}
*/
void solve() {
        cin>>n>>k;
        ll qt_ind_impar = (n -1)/2 + 1;

        if (n % 2 != 0 && k <= qt_ind_impar) cout << 1 + (k - 1)*2 << '\n';
        else if (n % 2 == 0 && k > qt_ind_impar) cout << 2 + (( k-qt_ind_impar) - 1)*2 << '\n';
        else if (n % 2 != 0 && k > qt_ind_impar) cout << 2 + (( k-qt_ind_impar) - 1)*2 << '\n';
        else if (n % 2 == 0 && k <= qt_ind_impar) cout << 1 + (k - 1)*2 << '\n'; 
        else;

}
signed main() {
        ___
        t=1;
        while(t--)solve();
        return 0;
}