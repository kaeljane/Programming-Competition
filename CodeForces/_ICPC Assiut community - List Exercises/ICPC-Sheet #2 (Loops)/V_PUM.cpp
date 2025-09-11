#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, variavel = 1;
    cin>>n;
    for (int i = 0; i < n; i++){
        for(int j = 0 ; j < 3 ; j++) {
            cout<<variavel<<" ";
            variavel++;
        }
        variavel++;
        cout<<"PUM"<<endl;
    }

    return 0;
}