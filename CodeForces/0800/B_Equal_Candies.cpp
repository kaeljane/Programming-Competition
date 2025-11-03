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
        n  -> qt de caixas
        ai -> doces dentro da caiza
        n friends
        pode comer diferentes qt de cada caixa e nao pode add doces nas caixas
        5
        1 2 3 4 5 
        2 - 1 = [1]
        3 - 1 = [2]
        4 - 1 = [3]
        5 - 1 = [4]     -> [total 10]
        
        fazer um sort()
        pegar primeiro valor e comparar qt_com += v[k] - v[0];
                para que fique igual do primeiro sempre
*/
void solve() {
        cin>>n;
        vl v(n);
        ll qt = 0;

        for (ll i=0;i<n;i++) cin>>v[i];

        sort(all(v));

        for (auto x : v) qt+= x - v[0];
        
        cout << qt << '\n';
}
signed main() {
        ___
        t=1;
        cin>>t;
        while(t--)solve();
    
        return 0;
}