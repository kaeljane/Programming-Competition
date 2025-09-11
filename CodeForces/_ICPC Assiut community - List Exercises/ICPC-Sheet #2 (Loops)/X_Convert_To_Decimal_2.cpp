#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, n;
    cin>>t;
    for (int i = 0 ; i < t ; i++){
        cin>>n;
        bitset<32> number_bi(n);
        // cout<<"n = "<<n<<" "<<number_bi;
        // transformar em string
        // cout<<number_bi.back()<<endl;
        string a = number_bi.to_string();
        // cout<<" a = "<<a<<endl;
        string testes = "";
        
        for (ll j = 0; j < a.size(); j++){
            if (a[j] == '1') {
                testes.push_back('1');
            }
        }
        // cout<<"testes = "<< testes<<endl;
        ll resposta = stoll(testes, nullptr, 2);
        cout << resposta << endl;

    }

    return 0;
}