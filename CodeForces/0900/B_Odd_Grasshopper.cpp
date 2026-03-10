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
// 09/03/2026 by Kaeljane
using namespace std;
 
 
ll MOD = 1e9 + 7;
ll INF = 1e18 + 7;
const int MAXN = 1e5 + 5;
// matriz vll mat(n, vl(m, 0))
 
ll n, t, k, x, y, z;
string s, a, b, c;
 
/* (mind)
    coordenada estiver em
        par   -> pula para a esquerda
        impar -> pula para a direita
 
    Encontre exatamente em qual ponto o gafanhoto estarC! apC3s exatamente n saltos
 
 
    x0 e n
 
    a cada minuto C) um i e esse 'i' vai aumentando de 1 em um
 
    PA com certeza!! analisar isso
 
    esquerda, direita, esquerda, direita... ou comeC'a com direita (depende)
 
    -, +, +, -, -, +, +, -, -, +, a cada 4 passos ele vai ficar no mesmo indice inicial
 
*/
 
 
void solve() {
	cin>>x>>n;
 
 
	ll padraoResto = n % 4;
	ll deslocamento = 0;
	if (padraoResto == 0) deslocamento = 0;
	else if (padraoResto == 1) deslocamento = -n;
	else if (padraoResto == 2) deslocamento = 1;
	else if (padraoResto == 3) deslocamento = n+1;
 
    if (x&1){
        cout << x -deslocamento << el;
    }
    else {
        cout << x +deslocamento << el;
    }
 
 
}
 
 
signed main() {
 
	___
 
	cin>>t;
	while(t--)
		solve();
 
	return 0;
 
 
}