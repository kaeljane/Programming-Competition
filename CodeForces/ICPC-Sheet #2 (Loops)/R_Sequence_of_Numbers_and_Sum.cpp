#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// soma de gauus n(n+1)/2
int main() {
    long long n, m;
    long long soma = 0;
    while (cin>>n>>m) {
        if (n>0 && m>0){
            if (n<m) {
                // imprimindo os valores
                for (int i = n; i<=m; i++) {
                    soma += i;
                    cout<<i<<" ";
                }
            }
            else {
                // imprimindo os valores
                for(int j = m ; j<=n ; j++) {
                    soma += j;
                    cout<<j<<" ";
                }
            }
            cout<<"sum ="<<soma<<endl;
            soma = 0;
        }

        else {break;}
    }

    return 0;
}