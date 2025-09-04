#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int a, b;
    cin>>a>>s>>b;
    if (s == "<")
    {
        if (a < b) {
            cout<<"Right"<<endl;
        }
        else {
            cout<<"Wrong"<<endl;
        }
    }
    else if (s == ">")
    {
        if (a > b) {
            cout<<"Right"<<endl;
        }
        else {
            cout<<"Wrong"<<endl;
        }
    }
    else if (s == "=")
    {
       if (a == b) {
            cout<<"Right"<<endl;
        }
        else {
            cout<<"Wrong"<<endl;
        } 
    }
    
    return 0;
}