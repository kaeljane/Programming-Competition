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
// 04/11/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    +++
    XYZ
    Inserir números na sequência de acordo com um procedimento!!!
    Se a diferença entre dois elementos adjacentes for 1 encerre o procedimento.
    
*/
void solve() {
    // ll f, sec; 
    cin>>n;
    vl lista(n);

    vl v;
    
    for (ll i=0; i<n; i++) cin>>lista[i];
        for (ll i=0; i<n-1; i++){
            if (abs(lista[i] - lista[i+1]) == 1){
                v.push_back(lista[i]);
            }
            else {
                if ((lista[i] - lista[i+1]) < 0) {
                    for(ll k=lista[i]; k < lista[i+1]; k++) {
                        v.push_back(k);
                    }
                }
                else {
                    for(ll k=lista[i]; k > lista[i+1]; k--) {
                        v.push_back(k);
                    }
                }
            }
        }
    if ( abs(v.back() - lista.back()) == 1) v.push_back(lista.back());
    imp(v, ll);
    
}
signed main() {
    ___
    t=1;
    while(t--)solve();
    
    return 0;
}