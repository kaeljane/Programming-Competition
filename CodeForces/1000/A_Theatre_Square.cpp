#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, a, qt_lado1 = 0, i = 1, qt_lado2 = 0, qt = 0; cin>>n>>m>>a;
    // if (n*m == a*a) {cout<<1<<'\n';}
    
    if (a == 1) {qt_lado1 = n; qt_lado2= m; cout<<qt_lado1*qt_lado2<<'\n';}
    // praça quadrada
    else if (n == m  && n != a) {
        while (true) {
            if (a > n) {qt_lado1+=1; qt_lado2+=1; break;}
            if(a*i >= n){qt_lado1 = i; qt_lado2 = i; qt+=i*2; break;}
            else{i++;}
        }
        i = 1;
        cout<<qt_lado1*qt_lado2<<'\n';
    }
    else if (a > n && a > m && n > 0 && m > 0) {cout<<1<<'\n';}
    else if (m == m && n == a) {
        cout<<1<<'\n';
    }
    else if (n != m && n != a && m != a) { // todas as variaveis sao de valore diferente
        // algoritmo da praça quadrada de só um lado
        // lado 1
        while (true) {
            if (a > n) {qt_lado1+=1; break;}
            if(a*i >= n){qt_lado1 = i; qt+=i; break;}
            else{i++;}
        }
        // cout<<qt_lado1<<'\n';
        i = 1;

        // lado 2
        while(true) {
            if (a > m) {qt_lado2+=1; break;}
            else if(a*i >= m){qt_lado2 = i; qt+=i; break;}
            else{i++;}
            
        }
        // cout<<qt_lado2<<'\n';
        i = 1;
        
        cout<<qt_lado1*qt_lado2<<'\n';
    }
         
    return 0;
}
