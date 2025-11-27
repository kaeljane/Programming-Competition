#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
 
int main() {
    ___;
    ll n, numero, resposta=0; cin>>n;
    vll matriz(n, vl(n));
    vl diagonal_1;
    vl diagonal_2;
 
    for(ll i = 0; i < n ; i++) {
        for(ll j = 0; j < n ; j++) {
            cin>>matriz[i][j]; 
            if (i == j) diagonal_1.push_back(matriz[i][j]);
        }
    }
 
    ll coluna = n-1;
 
    for (ll k = 0 ; k < n ; k++) {
        diagonal_2.push_back(matriz[k][coluna]);
        coluna--;
    }
 
    resposta = abs((accumulate(diagonal_1.begin(), diagonal_1.end(), 0LL)) - (accumulate(diagonal_2.begin(), diagonal_2.end(), 0LL)));
    
    cout<<resposta<<'\n';
 
    return 0;
}