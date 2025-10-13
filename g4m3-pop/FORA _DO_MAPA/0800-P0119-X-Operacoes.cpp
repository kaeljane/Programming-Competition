#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vd vector<long double>
#define vll vector<vector<long long>>
#define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
// 05/10/2025 by Kaeljane
using namespace std;

ll fatorial_recursivo(ll n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0){
        return 1;
    }
    return n * fatorial_recursivo(n-1);
}

int main() {
    ___
    ll l, t; cin>>l>>t;
    ll bin = 8, numero;
    vl list_bin;
    ll indice = 0;
    long double f1 = 0, f2= 0, f3=0, f4=0, f5=0, f6=0, f7=0, f8=0;
    
    while(bin--) {
        cin>>numero;
        list_bin.push_back(numero);
    }
    
    for (ll i = l; i <= t; i++) { // num do intervalo
        for (ll j = 0; j < 8; j++){
            if (list_bin[j] == 1) {
                if (j == 0) {
                    f1 = floor(1*i);
                    if (f1 > 9999999) {
                        f1 = 9999999;
                    }
                    cout << fixed << setprecision(0) << f1 << " ";
                }
                else if ( j == 1) {
                    f2 = floor(log2(i));
                    if (f2 > 9999999) {
                        f2 = 9999999;
                    }
                    cout << fixed << setprecision(0) << f2 << " ";
                }
                else if ( j == 2) {
                    f3 = floor(sqrt(i));
                    if (f3 > 9999999) {
                        f3 = 9999999;
                    }
                    cout << fixed << setprecision(0) << f3 << " ";
                }
                else if ( j == 3) {
                    f4 = floor(i* log2(i));
                    if (f4 > 9999999) {
                        f4 = 9999999;
                    }
                    cout << fixed << setprecision(0) << f4 << " ";
                }
                else if ( j == 4) {
                    f5 = floor(pow(i, 2));
                    if (f5 > 9999999) {
                        f5 = 9999999;
                    }
                    cout << fixed << setprecision(0) << f5 << " ";
                }
                else if ( j == 5) {
                    f6 = floor(pow(i, 3));
                    if (f6 > 9999999) {
                        f6 = 9999999;
                    }
                    cout << fixed << setprecision(0) << f6 << " ";
                }
                else if ( j == 6) {
                    f7 = floor(pow(2, i));
                    if (f7 > 9999999) {
                        f7 = 9999999;
                    }
                    cout << fixed << setprecision(0) << f7 << " ";
                }
                else if ( j == 7) {
                    f8 = floor(fatorial_recursivo(i));
                    if (f8 > 9999999) {
                        f8 = 9999999;
                    }
                    cout << fixed << setprecision(0) << f8 << " ";
                }
            }
        }
        cout << '\n';
    }

    return 0;
}