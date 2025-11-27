#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
 
int main() {
    ___;
    ll T, n, e; cin>>T;
    vl lista;
    vl maiores;
    vl resposta;
    
    while (T--)
    {   
        cin>>n;
        for (int i = 0; i<n; i++) {
            cin>>e;
            lista.push_back(e);
        }
        // copy(lista.begin(), lista.end(), ostream_iterator<ll> (cout, " ")); cout<<'\n';
        
        
        // pegar suas derivações
        ll deslocamento = n;
        // cada tamanho da subarray
        for (int i = 1; i <= n; i++) { 
            vl lista_backup = lista;
 
            for (int j = 0; j<deslocamento; j++) {
                // cada elemento desse deslocamento do subarray
                // cout<<lista_backup[j]<<' ';
                vi maiores = {};
                
                for(int k = 0 ; k < i; k++) {
                    // cout<<""<<lista[k+j]<<' ';
                    maiores.push_back(lista[k+j]);
                }
                ll maior = *max_element(maiores.begin(), maiores.end());
                // cout<<maior;
                resposta.push_back(maior);
                // cout<<'\n';
            //     
            }
            deslocamento--;
            // cout<<'\n'<<"------------"<<'\n';
        }
        copy(resposta.begin(), resposta.end(), ostream_iterator<ll> (cout, " "));
        // copy(lista.begin(), lista.end(), ostream_iterator<ll> (cout, " "));
 
        lista.clear();
        resposta.clear();
        if(T==0)break;
        cout<<'\n';
    }
    
    
    
 
    return 0;
}