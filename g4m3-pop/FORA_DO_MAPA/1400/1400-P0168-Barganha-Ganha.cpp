// ------------ Repetition repetition repetition repetition repetition repet... ------------
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
#define uset unordered_set
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 04/06/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7; // 998244353;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind) 
    24min 39sec

*/
void solve() {
    cin>>t;
    f (i, 1, t+1) {
        cin>>n>>s;

        string back = s;
        sort(rall(back));

        if (s == back) {cout << "Caso "<< i <<": " << s << el;}
        else {
            sort(all(back));
    
            f (j, 0, n) {
                char maior = back.back();
                if (s[j] != maior) {
                    char numeroAntigo = s[j];
                    s[j] = maior;
                    rf (k, n-1, 0) {
                        if(s[k] == maior) {
                            swap(s[k], numeroAntigo);
                            break;
                        }
                    }
                    break;
                }
                else {
                    back.pop_back();
                }
            }
    
            cout << "Caso "<< i <<": " << s << el;

        }

    }

}
signed main() {
    ___
    //cin>>t;
    //while(t--)
    solve();
    
    return 0;
}