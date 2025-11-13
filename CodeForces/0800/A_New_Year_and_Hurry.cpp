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
// 12/11/2025 by Kaeljane
using namespace std;

ll ans=0, p, t, m, x, y, z;
string s, a, b, c;

/* (mind) 
        5*i minutos
        n -> n de problemas da competição
        
        1, 2, 3
        5*1 5*2 5*3

        k -> minutos que ele precisa chegar em casa
        20:00
        Chegar meia noite ou antes 23:59 - 00:00
        Não pode ultrapassar

        4*60 = 240 minutos no máximo de competição

        k minutos para chegar de sua casa 

        240 (total) - k = tempo máximo que ele pode ficar na competição

        |3 222
        |2
        tempo_maximo_contest = 240 - 222 = 239 - 221 = [18]

        {0 + 5*1} = {5 + 5*2} = {15 + 5*3} = 30

        5*1 + 5*2 + 5*3 = 5 + 10 + 15 = [30] minutos para resolver todos os problemas
        5*1 + 5*2 = [15] <= [18] caso contrário break

        |4 190
        |4
        240 - 190 = 50
        {0 + 5*1} = {5 + 5*2} = {15 + 5*3} = {30 * 5*4} = [50]
*/

void solve() {
        cin>>p>>m;
        ll temp_max = 240 - m;
        ll ans_ans = 0;
        for(ll i=1; i<=p; i++){
                ans += 5*i;
                if (ans <= temp_max) {
                        ans_ans += 1;
                }
                
        }
        cout << ans_ans << '\n';

        
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}