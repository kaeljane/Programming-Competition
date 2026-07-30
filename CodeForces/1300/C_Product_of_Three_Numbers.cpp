// ------------ Repetition repetition repetition repetition repetition repet... ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define f(i,b,e) for (ll i = (b); i < (e); i++)
#define rf(i,b,e) for (ll i = (b); i >= (e); i--)
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define uset unordered_set
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 29/07/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z, ans;
// string s, a, b, c;

/* (mind) 
    Time: 1hora 11min aproximadamente
    Padrão: 

    jeito dificil...
    jeito facil...
    
*/
map<ll, ll> fatores (ll n) {
    map<ll, ll> fatores;
    while (n % 2 == 0) {
        fatores[2]++;
        n /= 2;
    }

    for (ll i = 3; i * i <= n; i+=2) {
        while (n % i == 0) {fatores[i]++; n /= i;}
    }
    if (n > 1) {
        fatores[n]++;
    }

    return fatores;

}

void solve() {
    cin>>n;

    map<ll, ll> numeros = fatores(n);
    if (numeros.size() == 3) {
        cout << "YES" << el;
        auto it = numeros.begin();
        ll p = it->fi; it++;
        ll p2 = it->fi;
        
        cout << p << " " << p2 << " " << n / (p*p2) << el;
    }
    else if (numeros.size() < 3) {
        if (numeros.size() == 1) {
            auto it = numeros.begin();
            ll p = it->fi;
            ll k = it->sec;

            if (k > 5) {
                cout << "YES" << el;
                    
                cout << p << " " << p*p << " " << n / (p*p*p) << el;
            }
            else {
                cout << "NO" << el;
            }
        }
        else if (numeros.size() == 2) {
            auto it = numeros.begin();
            ll p1 = it->fi;
            ll k1 = it->sec;
            it++;
            ll p2 = it->fi;
            ll k2 = it->sec;

            if (k1 + k2 >= 4) {
                cout << "YES" << el;
                cout << p1 << " " << p2 << " " << n / (p1*p2) << el;
            }
            else {
                cout << "NO" << el;
            }
        }
    }
    else { // tem mais de tres divisores
        cout << "YES" << el;
        ll qt = 1, ans=1, y = 1;
        for (auto &x : numeros) {
            if (qt < 3) {
                cout << x.fi << " ";
                qt++;
                y *= (x.fi);
            }
        }
        cout << n / y << el;
    }
    
    
}

void solve() {
    cin>>n;

    ll a = -1, b = -1, c = -1;

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            a = i;
            n /= a;
            break;
        }
    }

    if (a != -1) {
        for (ll i = a + 1; i * i <= n; i++) {
            if (n % i == 0) {
                b = i;
                c = n / b;
                break;
            }
        }
    }

    if (a != 1 && b != 1 && c > b) {
        cout << "YES" << el;
        cout << a << " " << b << " " << c << el;
    }
    else cout << "NO" << el;

}
signed main() {
    ___
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}