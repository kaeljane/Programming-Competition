#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, r;
    long long a, b, c;
    cin>>a>>s>>b>>r>>c;
    
    if (s == "+") {
        if ((a + b) == c){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<a+b<<endl;
        }
    }
    else if (s == "-") {
        if ((a - b) == c){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<a-b<<endl;
        }
    }
    else if (s == "*") {
        if ((a * b) == c){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<a*b<<endl;
        }
    }

    return 0;
}