#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 15/10/2025 by Kaeljane
using namespace std;
// arrumar depois
int main() {
    ___
    ll N, item; cin>>N;
    vl v(N);
    map<ll, ll> m;
    ll f_el = 0, s_el, menor = INT_MAX, aux=0;
    
    for(ll i=0; i<N; i++) { cin >> v[i];}

    for (ll i = 0; i < N; ++i){
        if (i == 0) f_el = i; // indice
        if (v[i] == f_el) f_el = i;
        else if (f_el != v[i]) s_el = i; // indice
        m[v[i]]++;
        
        if (m.size() == 3) {
            for (auto& x : m) {
                m[v[f_el]] = 1;
                aux += x.second;
                cout << x.first << " " << x.second << '\n';
                
            }
            cout << "soma: " << aux << '\n'; 
            menor = min(menor, aux);
            aux=0;
            m.erase(v[f_el]);
            
            i == s_el;
        }
    }

    
    // cout << resposta << '\n';
    cout << menor << '\n';


    return 0;
}