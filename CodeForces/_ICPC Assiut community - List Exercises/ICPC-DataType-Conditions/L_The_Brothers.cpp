#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string n1, s1, n2, s2;
    cin>>n1>>s1>>n2>>s2;
    vector<string> nome = {n1, s1};
    vector<string> nome2 = {n2, s2};

    if (nome.back() == nome2.back()) {
        cout<<"ARE Brothers"<<endl;
    }
    else {
        cout<<"NOT"<<endl;
    }
    return 0;
}