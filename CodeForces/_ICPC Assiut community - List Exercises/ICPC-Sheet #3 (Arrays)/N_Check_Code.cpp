#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define vll vector<vector<long long>>
# define ___ ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
// 24/09/2025 by Kaeljane
int main() {
    ___;
    ll A, B; cin>>A>>B;
    bool regras_ = true;
    string S; cin>>S;

    // cout<<S[0]<<'\n';

    
    if (1 <= A && A <= 10 && 1 <= B && B <= 10) regras_=true;
    else regras_ = false;

    if (S[A] != '-') {
        regras_ = false;
    }
    if (A+B+1 != S.size()) regras_ = false;

    if (regras_ == true){
        for(ll i = 0; i < A+B+1 && i != A ; i++) {
            if ((48 <= S[i] && S[i] <= 57)) regras_ = true;
            else {
                regras_ = false;
                break;
            }
        }
    }
    if (regras_) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';

    return 0;
}