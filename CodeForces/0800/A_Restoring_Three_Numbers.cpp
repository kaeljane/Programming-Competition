#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define iii par<ll, ii>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v.rend)
#define rev(v) reverse(all(v))
#define sort(v) sort(all(v))
#define rsort(v) sort(rall(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) (v).size()
#define vazio(v) (v).empty()
#define lb lower_bound
#define ub upper_bound
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 14/11/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll MAXI = 1e9 + 7;
ll INF = 1e18 + 7;

ll n, t, k, x, y, z;
ll s, a, b, c;

/* (mind) 
        a = x - (z - (y - a));
        a = x - (z - y + a);
        a = x - z + y - a;
        [2a =  x - z + y;]
        2a = 3 - 5 + 6;
        2a = 4/2

        x = a+b,
        y = a+c
        z = b+c
        k = a+b+c

        3 = a+b
        6 = a+c
        5 = b+c
        4 = a+b+c

        a = x - b
        c = y - a
        b = z - c

        k = x - b + z - c + y - a
        k = x + y + z - k
        k = (x + y + z)/2

        a = (x - z + y)/2;
        c = y - ((x - z + y)/2);
        b = z - (y - ((x - z + y)/2));

*/
void solve() {
        cin>>x>>y>>z>>k;
        vl v = {x, y, z, k};
        sort(v);
        c = v[3] - v[0];
        b = v[3] - v[1];
        a = v[3] - v[2];
        cout <<  c << " " << b << " " <<  a << '\n';
        
}
signed main() {
        ___
        t=1;
        // cin>>t;
        while(t--)solve();
        
        return 0;
}