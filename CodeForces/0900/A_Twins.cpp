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
// 14/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
        n -> moedas
        pegar o número mínimo de moedas, cuja soma é maior
        pegar primeiro a maior depois a menor, analisa se a soma dos restantes é maior ou menor.

        se a moeda maior e menor ainda nao for suficiente pegue a segunda maior.

        ou simplesmente só pegar as maiores moedas. (pq é número mínimo de moedas)
*/
void solve() {
        cin>>n;
        vl moedas;
        while (n--) {
                cin>>x;
                moedas.push_back(x);
        }
        
        sort(moedas.rbegin(), moedas.rend());
        // imp(moedas, ll);
        ll soma_moedas = 0;
        ll m = 0;
        for (ll i=0; i < moedas.size(); i++) {
                soma_moedas += moedas[i];
                m += 1;
                ll soma_restante = 0;
                for (ll j = i+1; j < moedas.size(); j++) {
                        soma_restante += moedas[j];
                }
                if (soma_moedas > soma_restante) break;
        }
        cout << m << '\n';
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}