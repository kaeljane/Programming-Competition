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
#define f(i, b, e) for (ll i = (b); i < (e); i++)
#define rf(i, b, e) for (ll i = (b); i >= (e); i--)
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t>(cout, e))
#define ___                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
// 21/01/2026 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))

ll n, t, k, x, y, z;
string s, a, b, c;

/* (mind)
    map...
    2 1 1 1 1
    tem que ter peso igual
    e se eu transformar o 1 em dois?
    ceil(1 / 2) == 1 + 2 = 3
*/
void solve()
{
    cin >> n;
    vl cnt(3, 0); // 0, 1, 2

    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        cnt[x]++;
    }
    // n impar
    if ((cnt[1] + 2*cnt[2]) % 2 == 0 && n % 2 == 0) cout << "YES" << el;
    else if (cnt[1] % 2 == 0 && cnt[1] != 0 && n & 1) cout << "YES" << el;
    else cout << "NO" << el;
}
signed main()
{
    ___
            cin >>
        t;
    while (t--)
        solve();

    return 0;
}