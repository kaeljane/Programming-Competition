#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    char k;
    cin>>a>>k>>b;
    if (k == '+') {
        cout<<a+b<<endl;
    }
    else if (k == '-') {
        cout<<a-b<<endl;
    }
    else if (k == '*') {
        cout<<a*b<<endl;
    }
    else {
        cout<<a/b<<endl;
    }

    return 0;
}