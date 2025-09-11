#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    //ASCII
    // 0 : 48, 9: 57 == IS DIGIT
    char a;
    cin>>a;
    if (a >= 48 && a<=57) {
        cout<<"IS DIGIT"<<endl;
    }
    else if (a >=97 && a<=123){
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }
    else {
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }

    return 0;
}