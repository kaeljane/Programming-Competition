#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

long double formula(ll p, ll a, ll b, ll c, ll d, ll n) {
    
    long double resposta = 0;
    long double maxAtual = 0;
    for (ll k = 1; k <= n; k++) {
        long double atual = p*(sin(a*k + b) + cos(c*k + d) + 2);
        resposta = max(resposta, maxAtual - atual);
        maxAtual = max(maxAtual, atual);
    }

    return resposta;
    
}

void solve() {
    ll p, a, b, c, d, n; 
    
    while(cin>>p>>a>>b>>c>>d>>n) {
        long double resposta = formula(p, a, b, c, d, n);    
        cout << fixed << setprecision(6) << resposta << '\n';
    }
    
    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}