#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define vl vector<long long>
#define all(v) (v).begin(), (v).end()
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 05/04/2026
// I can it

ll INF = 1e18 + 7;

ll n, t, l, x, y, z;
string s, a, b, c;

/* (mind )
    30m e 0sec
    outra forma de fazer
*/
void solve(){ 
    cin>>n;
    cin>>s;
    ll ans = 0;

    vector<ll> dir(26, 0);
    vector<ll> esq(26, 0);
    
    ll sizeDir = 0;
    ll sizeEsq = 0;

    for (ll i = 0; i < n; i++) {
        ll letra = s[i] - 'a'; // transformar letra em numero

        if (dir[letra] == 0) {
            sizeDir++;
        }
        dir[letra]++;
    }

    for (ll i = 0; i < n-1; i++) {
        ll letra = s[i] - 'a';

        if (esq[letra] == 0) {
            sizeEsq++;
        }
        esq[letra]++;

        dir[letra]--;
        if (dir[letra] == 0) {
            sizeDir--;
        }

        ans = max(ans, sizeDir + sizeEsq);
    }

    cout << ans << el;


}


void solve2(){
    cin>>n;
    cin>>s;
    ll ans = -INF;
    
    map<char, ll> dir;
    map<char, ll> esq;

    for (ll i = 0; i < n; i++) {
        dir[s[i]]++;
    }

    for (ll i = 0; i < n-1; i++) {
        if (dir[s[i]] > 0) {   
            esq[s[i]]++;
            dir[s[i]]--;
        }
        
        if (dir[s[i]] == 0) {
            dir.erase(s[i]);
        }
        ans = max(ans, (ll)dir.size() + (ll)esq.size());
        
    }

    cout << ans << el;
    
}
signed main() {
    ___
    cin>>t;
    while(t--) 
    solve();

    return 0;
}