#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define ll long long
using namespace std;

/*
    
*/

void solve() {
    ll n, k; cin>>n>>k;
    vector<ll> v(2*n);

    for (ll i = 0; i < n; i++) {
        cin>>v[i];
        v[i+n] = v[i];
    }
    ll l = 0, qtMaxima = 0, qtAtual = 0, tamanho = 0;
    set<ll> acc; // ou array de acc
    vector<ll> freq(3*100000, 0);


    for (ll r = 0; r < 2*n; r++) {
        if (qtMaxima > n-1) break;

        if (!freq[v[r]] && tamanho == k) {
            // tirar um pra colocar o novo (andar com o l) diminui qtAtual
            ll valorTirar = v[l];
            
            for (ll j = l; j < r; j++) {
                freq[v[l]]--; 
                if (freq[v[l]] == 0) {
                    l++;
                    qtAtual--;
                    break;
                }
                l++;
                qtAtual--;
            
            }
            freq[v[r]]++; qtAtual++;

        }
        else if (!freq[v[r]] && tamanho < k) {
            freq[v[r]]++; qtAtual++; tamanho++;
        }
        else if (freq[v[r]]) {
            // se estiver dentro aumenta qtAtual
            freq[v[r]]++;
            qtAtual++;
        }

        qtMaxima = max(qtAtual, qtMaxima);
        
    }
    std::cout << qtMaxima << '\n';


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // ll t; cin>>t; 
    // while (t--)
    solve();

    return 0;
}