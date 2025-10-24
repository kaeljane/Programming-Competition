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
// 24/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z, h, m1, m2, m3 , r=0;
string s, a, b, c;

/* (mind) 
    n -> fatias de pizza
    
    se -> houver duas fatias restantes de pizza alex come elas (todas elas)
    caso contrário -> 
        m-> 
            número atual de fatias 
            m >= 3
            três grupos (m1, m2, m3)
            (m1) hao -> eat 
            (m2) alex -> eat 
            (m3) dia posterior (sempre será maior)
    
    [número máximo de fatias que Hao pode comer]
    
    n == 8 
        entrar no else
        m1 -> (2) 
        m2 -> 2 (3) 
        m3 -> n-3 (3) valor máximo possivel
        
        (n/2 == m3)

        m1 -> (2) 
        m1 == [1]
        m2 -> 2 (if m3 % 2 == 0 entao pegue a metade de m2) == 2
        m2 == [2]
        m3 -> n-3 (8 - 8/2) == [4]valor máximo possivel
        m3 == [4]

        DIA 2
        m3 == 4
            m3 = (4 - 2) == [2]
            m3 == [2]
            
            m2 = m3/2
            m2 = 2/2 == 1
            m2 = [1] + 1

            m1 = m3/2
            m1 = 2/2 = 1
            m1 == [1]

        -----------------------------
    if (m3 / 3 == m1, m2, m3 && m1 = m2 = m3)  

    
*/

void solve() {
    cin>>n;
    ll ans = 0L;

    while (n > 2) {
        m1 = n/3;
        m2 = n/3;
        m3 = n- m1 -m2;

        n = m3;
        ans += m1;
    }
    cout << ans << '\n';
}

// void teste() {
//     while(cin>>m3) {
//         ll m3_test = m3;
//         m1 = m3/3;
//         m2 = m3/3;
//         m3_test = m3/3;
//         r=0;
//         while(true){
//             if (m3 <= 2) {
//                 break;
//             }
//             else if ((m1+m2+m3_test) == m3 && m1 != 0) {
//                 r+=m1;
//                 m3 = m3_test;
//             }
//             else {
//                 m3 = (m3-(m3/2));
//                 if (m3 % 2 == 0) {
                    
//                     m2 = m3/2;
//                     m1 = m3/2;
//                     r += m1;
//                 }
//                 // m3 for impar
//                 else {

//                 }

//             }
//             cout << m1 << ' ' << m2 << ' ' << m3 << '\n';
//         }
//         cout << r << '\n';
//     }
    
// }
int main() {
    ___
    cin>>t;

    while (t--) solve();
    
    return 0;
}