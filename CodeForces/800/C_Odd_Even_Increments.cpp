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

    (1 2 1)    ->     (1 3 1) ele aumentou só uma vez nos números impares 
    0 1 2              matriz contém só números impares agora


    ele quer analisar 

    
 */
 void solve() {
    cin>>n;
    a = "NO";
    vl v = {};
    for (ll i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    while (a == "NO") {
        b = "PAR";
        for (ll i =0;i<n;i++){
            // divisivel por dois todos os outros precisam ser divisiveis por dois
            if (v[0] % 2 == 0) {
                b = "PAR";
            }
            else {
                b = "IMPAR";
            }

            if (v[i] % 2 )
        }
        for (ll i = 0; i < n; i+=2) {

        }
    }

    
 }
 int main() {
    ___
    cin>>t;
    while(t--)solve();
    
    return 0;
 }