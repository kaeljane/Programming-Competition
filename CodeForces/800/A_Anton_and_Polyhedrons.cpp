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
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 20/10/2025 by Kaeljane
using namespace std;

void solve() {
    ll n, t_faces=0; cin>>n;
    string pol;
    while (n--) {
        cin>>pol;
        if (pol == "Tetrahedron") t_faces+=4;
        else if (pol == "Cube") t_faces+=6;
        else if (pol == "Octahedron") t_faces+=8;
        else if (pol == "Dodecahedron") t_faces+=12;
        else if (pol == "Icosahedron") t_faces+=20;
    }

    cout << t_faces << '\n';
}
int main() {
    ___
    
    solve();
    
    return 0;
}