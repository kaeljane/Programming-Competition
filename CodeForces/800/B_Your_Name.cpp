#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) v.begin(), v.end()
#define imp(v, t) copy(v.begin(), v.end(), ostream_iterator<t> (cout, ' '))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 28/10/2025 by Kaeljane
using namespace std;

ll n, t, k, x, y, z;
string s, a, b, c="YES";

/* (mind) 
    n cubos   (in lowercase)
    s 
    map... or set -> set é melhor

    reorganizar... set é melhor pq tem que contar a quantidade de letras

    o = 1
    r = 1
    h = 1
    i = 1

    h = 1
    o = 1
    r = 1
    i = 1

    n = 1  
    e = 1
    z = 1
    u = 1
    q = 1
    o = 1


    */
void solve() {
    map<char, int> map_1; // s -> reorganizar 
    map<char, int> map_2; // t -> para virar essa
    cin >> n;
    cin >> a >> b;
    c = "YES";
    for (ll i = 0; i < n; i++) {
        map_1[a[i]]++;
    }
    for (ll i = 0; i < n; i++) {
        map_2[b[i]]++;
    }
    ll ind = 0;
    for (auto x : map_2){
        ll aux = 0;
        for (auto& y : map_1) {
            if (ind == aux) {
                if (x.first != y.first || x.second != y.second){
                    c = "NO";
                    break;
                }
            }
            aux++;
        }
        ind++;
        if (c == "NO") break;
    }

    cout << c << '\n';
}
int main() {
    ___
    cin>>t;
    while (t--)solve();
    
    return 0;
}