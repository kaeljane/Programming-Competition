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
        sempre removendo de dois em dois -> 
                até que todos os elementos sejam diferentes 
                imprimir a quant de elementos
        (par)
                if set.size() == 2
                        ans = tamanho 
        (impar)
                if set.size() == 2
                        ans = tamanho - 1
*/
void solve() {
        cin>>n;
        set<ll> v;
        for (ll i=0; i<n; i++) {
                cin>>k;
                v.insert(k);
        }

        if (n%2==0) cout << v.size()<<'\n';
        else cout << v.size()-1 << '\n';
        // refazer
}
signed main() {
    ___
        t=1;
        cin>>t;
        while(t--)solve();
        
        return 0;
}