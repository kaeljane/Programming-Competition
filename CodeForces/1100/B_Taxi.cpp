// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, int>
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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 13/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    n -> grupos
    carro -> pode ter só 4 passageiros

    
*/
void solve() {
    cin>>n;
    
    vector<int> cnt(5, 0);
    for (ll i = 0; i < n; i++) {
        cin>>x; cnt[x]++;
    }

    ll taxis = 0;
    taxis += cnt[4];
    taxis += cnt[3];
    ll rest = cnt[3];

    if (rest >= cnt[1]) {
        taxis += ceil((double)cnt[2]/2);
    }
    else if (rest < cnt[1]){
        cnt[1] -= rest;
        if (cnt[2] % 2 == 0){
            taxis += ceil((double)cnt[2]/2);
            taxis += ceil((double)cnt[1]/4);
        }
        else {
            // vsi deixar sempre dois espaços rest eu achu
            taxis += ceil((double)cnt[2]/2);
            taxis += ceil((double)(cnt[1] - 2)/4);
        }
        
    }

    cout << taxis << el;
    
}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}