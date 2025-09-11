#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    long long n;
    cin>>t;
    for (int i = 0; i<t ; i++){
        cin>>n;
        string n_string = to_string(n);
        for(int j = n_string.size()-1 ; j >= 0 ; j--){
            cout<<n_string[j]<<" ";
        }
        cout<<endl;

    }

    return 0;
}