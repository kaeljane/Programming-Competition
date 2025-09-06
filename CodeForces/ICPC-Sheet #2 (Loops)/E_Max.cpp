#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a, teste;
    cin>>a;
    vector<int> maior = {};
    for (int i = 0; i < a; i++){
        cin>>teste;
        maior.push_back(teste);
        sort(maior.begin(), maior.end());
    }
    cout<<maior.back()<<endl;
    return 0;
}