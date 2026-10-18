#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/
const ll MOD = 1e9 + 7;

ll binPow(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp&1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;

}

ll modInverse(ll n) {
    return binPow(n, MOD - 2);
}

void solve() {
    ll n, k; cin>>n>>k;

    ll pontos = k + 2;

    vector<ll> y(pontos + 1, 0);
    for (ll i = 1; i <= pontos; i++) {
        y[i] = (y[i - 1] + binPow(i, k)) % MOD;
    }
    
    if (n <= pontos) {
        cout << y[n] << '\n';
        return;
    }

    // fatorias e inversos pre computcacao
    vector<ll> fact(pontos + 1, 1), invFact(pontos + 1, 1);
    for (ll i = 1; i <= pontos; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[pontos] = modInverse(fact[pontos]);
    for (ll i = pontos - 1; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }

    // pref e suff 
    vector<ll> pref(pontos + 2, 1), suff(pontos + 2, 1);
    for (ll i = 1; i <= pontos; i++) {
        pref[i] = (pref[i - 1] * (n - i)) % MOD;
    }
    for (ll i = pontos; i >= 1; i--) {
        suff[i] = (suff[i + 1] * (n - i)) % MOD;
    }

    // formula de lagrange
    ll ans = 0;
    for (ll i = 1; i <= pontos; i++) {
        ll num = (pref[i - 1] * suff[i + 1]) % MOD;
        ll den = (invFact[i-1] * invFact[pontos - i]) % MOD;
        ll sinal = ((pontos - i) % 2 != 0) ? -1 : 1;

        ll termo = (y[i] * num) % MOD;
        termo = (termo * den) % MOD;
        termo = (termo * sinal) % MOD;

        ans = (ans + termo + MOD) % MOD;
    }

    cout << ans << '\n';

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}