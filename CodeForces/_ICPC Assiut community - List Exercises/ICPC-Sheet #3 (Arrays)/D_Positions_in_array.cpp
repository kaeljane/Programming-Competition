#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t;
    long long n;
    for (ll _ = 0; _ < t ; _++){
        cin>>n;
        if (n<=10){cout<<"A["<<_<<"] = "<<n<<'\n';}
    }
    // by Kaaeljane
    return 0;
}