#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, asteriscos = 1, espacu = 0;
    cin>>n;
    for(int i = n ; i > 0 ; i--){
        for(int j = i-1; j>0 ; j--){
            cout<<" ";
        }
        for(int k = 0; k<asteriscos ; k++){
            cout<<"*";
        }
        asteriscos+=2;
        cout<<endl;
    }

    for (int h = n; h > 0; h--){
        
        for (int o = 0; o < espacu ; o++){
            cout<<" ";
        }
        espacu += 1;
        
        for(int i = 0 ; i<asteriscos-2; i++){
            cout<<"*";
        }
        
        asteriscos-=2;
        cout<<"\n";
    }

    return 0;
}