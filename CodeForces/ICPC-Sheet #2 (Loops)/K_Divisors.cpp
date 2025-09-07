#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> lista = {};
    for (int i = 1; i <= n; i++){
        if (n % i == 0){lista.push_back(i);}
    }
    for(int& numero : lista){
        cout<<numero<<endl;;
    }
    return 0;
}