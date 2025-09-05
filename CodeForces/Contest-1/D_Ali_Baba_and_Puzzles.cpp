#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    
    if (a+b*c == d){cout<<"YES"<<endl;}
    else if ((a+b-c) == d) {cout<<"YES"<<endl;}
    
    else if ((a-b+c) == d) {cout<<"YES"<<endl;}
    else if ((a-(b*c)) == d) {cout<<"YES"<<endl;}

    else if (((a*b)+c) == d) {cout<<"YES"<<endl;}
    else if (((a*b)-c) == d) {cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}
    return 0;
}