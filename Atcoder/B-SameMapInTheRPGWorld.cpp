// ------------ Discipline is remembering who you said you wanted to be^^ ------------
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ii pair<ll, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define rev(v) reverse(all(v))
#define soma(v) accumulate(all(v), 0LL)
#define max_el(v) *max_element(all(v))
#define min_el(v) *min_element(all(v))
#define sz(v) ((int)(v).size())
#define vazio(v) (v).empty()
#define fi first
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sec second
#define el '\n'
#define umap unordered_map
#define uset unordered_set
#define imp(v, t, e) copy(v.begin(), v.end(), ostream_iterator<t> (cout, e))
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 22/12/2025 by Kaeljane
using namespace std;

ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e6 + 5;
// 

ll n, t, k, x, y, z, s;
string a, b, c;

/* (mind) 
    
    
*/
// bool igual(const vll &mat1, const vll &mat2){
//     for (ll i=0; i < mat1.size(); i++){
//         for (ll j=0; j < mat1[0].size(); j++) {
//             if (mat1[i][j] != mat2[i][j]) return false;
//         }
//     }
//     return true;
// }

// bool horizontal(vll &mat1, vll &mat2) {
//     ll curr, prox;
//     for (ll i=0; i < mat1.size(); i++){
//         for (ll j=0; j < mat1[0].size()-1; j++) {

//         }
//     }
// }

void solve() {
    cin>>x>>y;
    vll mat(x, vl(y, 0));
    vll matAns(x, vl(y, 0));

    vll matBackup = mat;
    vll matAnsBackup = matAns;

    ll qtResh = 0;
    for (ll i=0; i<x; i++) {
        cin>>s;
        for (ll j=0; j<y; j++) {
            mat[i][j] = s[j];
            if (s[j] == '#') qtResh++; 
        }
    }

    ll qtReshResposta=0;
    for (ll i=0; i<x; i++) {
        cin>>s;
        for (ll j=0; j<y; j++) {
            matAns[i][j] = s[j];
            if (s[j] == '#') qtReshResposta++; 
        }
    }

    if (qtResh != qtReshResposta){
        cout << "No" << el;
        return;
    }

    for (ll s=0; s < x; s++) {
        for (ll t=0; t < y; t++) {
            bool ehIgual = true;

            for (ll i=0; i < x; i++) {
                for (ll j=0; j < y; j++) {
                    if (mat[(i + s) % x][(j + t) % y] != matAns[i][j]) {
                        ehIgual = false;
                        break; // para o loop j
                    }
                }
                if (!ehIgual) break; // para o loop i
            }
            if (ehIgual) {
                cout << "Yes" << el;
                return;
            }
        }
    }
    cout << "No" << el;

    
    
}

void solve2() {
    ll h, w;
     
    vector<string> A(h), B(h);

    for(ll i = 0; i < h; i++) cin>>A[i];
    for(ll i = 0; i < w; i++) cin>>B[i];

    for (ll s = 0; s < h; s++) {
        for (ll t = 0; t < w; t++) {

            bool equal = true;
            for (ll i = 0; i < h; i++) {
                for (ll j = 0; j < w; j++) {
                    if (A[(i+s) % h][(j + t) % w] != B[i][j]) {
                        equal = false;
                        i = h;
                        break;
                    }
                }
            }

            if (equal) {
                cout << "Yes" << el;
                return;
            }
        }
    }
    cout << "No" << el;


}


void solve3() {
    ll h, w;
    cin>>h>>w;
    vector<string> A(h), B(w);

    for (ll i = 0; i < h; i++) cin>>A[i];
    for (ll i = 0; i < w; i++) cin>>B[i];


    for (ll s = 0; s < h; s++) {
        for (ll t = 0; t < w; t++) {

            bool equal = true;
            for (ll i = 0; i < h; i++) {
                for (ll j = 0; j < w; j++) {
                    if (A[(s+i) % h][(t+j) % w] != B[i][]) {
                        equal = false;
                        i = h;
                        break;
                    }
                }
            }
            if (equal) {
                cout << "YES" << el;
                return;
            }
        }
    }
    cout << "NO" << el;

}
signed main() {
    ___
    // cin>>t;
    // while(t--)
    solve();
    
    return 0;
}