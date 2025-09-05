#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long long n,k,a;
    cin>>n>>k>>a;
    if (((n*k)%a) != 0) {
        cout<<"double"<<endl;
    }
    // a partir daqui ele é totalmente divisivel por a
    // 5 * 10e9
    else if (((n*k)/a) > pow(10, 9)){
        cout<<"long long"<<endl;
    }
    else if (((n*k)/a) < pow(10, 9)) {cout<<"int"<<endl;}
    else{cout<<"errado"<<endl;}


    return 0;
}