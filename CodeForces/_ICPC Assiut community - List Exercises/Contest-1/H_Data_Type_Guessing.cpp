#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    long long n,k,a;
    cin>>n>>k>>a;
    if (((n*k)%a) != 0) {
        cout<<"double"<<endl;
    }
    // a partir daqui ele é totalmente divisivel por a
    // 5 * 10e9

    else if (((n*k/a)) > numeric_limits<int>::max()){
        cout<<"long long"<<endl;
    }
    else if (((n*k/a)) <= numeric_limits<int>::max()) {
        cout<<"int"<<endl;
    }
    else {
        cout<<"errado"<<endl;
    }
    // cout<<numeric_limits<int>::max()<<endl;
    // cout<<numeric_limits<int>::min()<<endl;
    // terminar depois tired
    return 0;
}