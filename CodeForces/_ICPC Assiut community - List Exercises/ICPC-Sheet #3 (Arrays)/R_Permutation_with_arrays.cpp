#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int n, a;
    int numberIgual = 0;
    vector<long long> first_line;
    vector<long long> sec_line;
    cin>>n; // vai ter 'n' números na array
    for (int i = 0; i < n; i++) {
        cin>>a;
        first_line.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        cin>>a;
        sec_line.push_back(a);
    }
 
    sort(first_line.begin(), first_line.end());
    sort(sec_line.begin(), sec_line.end());
 
    if (first_line == sec_line) {
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
    }
}