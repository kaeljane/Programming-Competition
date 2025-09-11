#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //quantidade de linhas
    ll n, astericos_1 = 0, astericos_3 = 0;
    cin>>n;
    ll astericos_2 = n-2;
    
    // adicionando elementos em cada linha
    for(int i = 1 ; i<=n ; i++){
        // tudo que será adionado aqui vai para uma linha

        // for asteriscos_1//////////////////////////////////////
        for(int j = 0; j < astericos_1; j++){cout<<"*";} 
        /*ir adicionando asteriscos até metade +1 depois vai diminuindo a quantidade de asteriscos */ 
        if(i <= n/2){astericos_1++;}
        else{astericos_1--;}
        //--------------------------------------------------------
        
        // barra ////////////////////////////////////////////////
        if (i <= n/2) {cout<<"\\";}
        else if (i > n/2+1) {cout<<"/";}
        else {cout<<"X";}

        // for asteriscos_2//////////////////////////////////////
        for(int k = 0 ; k < astericos_2 ; k++){cout<<"*";}

        if (i <= n/2){
            if (astericos_2 > 2) astericos_2-=2;
            else if (astericos_2 < 2) astericos_2 = 0;
        }
        else {
            if (astericos_2 == 0) {astericos_2++;}
            else{astericos_2+=2;}
        }
        //--------------------------------------------------------

        // barra ////////////////////////////////////////////////
        if (i <= n/2) {cout<<"/";}
        else if (i > n/2+1) {cout<<"\\";}
        //--------------------------------------------------------

        // for asteriscos_3//////////////////////////////////////
        for(int _ = 0; _ < astericos_3; _++){cout<<"*";}
        if(i <= n/2){astericos_3++;}
        else{astericos_3--;}
        //--------------------------------------------------------

        // pular linha --> deixar para o final
        cout<<'\n';
    }

    //by Kaeljane

    return 0;
}