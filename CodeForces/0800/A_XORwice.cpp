// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define f(i,b,e) for (ll i = (b); i < (e); i++)
#define rf(i,b,e) for (ll i = (b); i >= (e); i--)
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 01/02/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, a, b;
string s, c;

/* (mind) 
    relembrando:
        a b a^b
        0 0  0
        0 1  1
        1 0  1
        1 1  0 ambos precisam ser diferente para true

    quer o menor valor possivel dessa soma!!
    temos que desligar a maior parte dos bits!
    possivelmente tudo
    lembrando que tem que fazer xor em ambos os numeros!! e é com o mesmo numero

    first case test
    a= 0110
    b= 1100  2bit em comum!!
    
    tem que ser um numero que consiga eliminar a maioria dos bits (se for igual é false(lembrar disso))

    0100

    0110^0100 + 1100^0100
    0010 + 1000
    = 2 + 8 = [10] bateu com a resposta

    analisar onde esta os bits que são iguais!
        deixar eles iguais e colocar zero onde os elementos sao diferentes ou simplemsnte deixar o zero previamente colocado!!


    */
void solve() {
    cin>>a>>b;

    bitset<64> aBit = a;
    bitset<64> bBit = b;
    string ans = "000000000000000000000000000000000000000000000000000000000000000";

    for (ll i = 0; i < 64; i++) {
        if (aBit[i] == 1 && bBit[i] == 1) {
            ans[i] = 1;
        }
    }
    reverse(all(ans));

    ll ansInt = stoll(ans);
    
    ll calc = a^ansInt + b^ansInt;
    cout << calc << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}