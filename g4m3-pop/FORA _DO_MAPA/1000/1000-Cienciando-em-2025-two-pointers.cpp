#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
// 15/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll N; cin >> N;
    vl v(N);
    map<ll, ll> m; 
    
    ll menor = -1; 
    
    for(ll i=0; i<N; i++) { cin >> v[i]; }

    ll f_el = 0;
    for (ll i = 0; i < N; ++i){
        m[v[i]]++;
        while (m.size() == 3) {
            
            ll tamanho_atual = i - f_el + 1;
            if (menor == -1 || tamanho_atual < menor) {
                menor = tamanho_atual;
            }
            ll l = v[f_el];
            m[l]--; 
            if (m[l] == 0) {
                m.erase(l);
            }
            
            f_el++;
        }
    }
    
    cout << menor << '\n';
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    solve();

    return 0;
}