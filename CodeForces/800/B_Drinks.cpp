#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(x) x.begin(), x.end()
#define ___                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
// 18/10/2025 by Kaeljane
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ld soma = 0, r, p;
    while (cin >> p)
    {
        // p /= 100;
        soma += p;
    }
    r = (soma / n);

    cout << fixed << setprecision(12)<< soma / n << '\n';
}
int main()
{
    ___

    solve();

    return 0;
}