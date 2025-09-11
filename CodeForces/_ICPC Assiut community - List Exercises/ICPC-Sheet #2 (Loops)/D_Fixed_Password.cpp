#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int year;
    while (true) {
        int i = 0;
        cin>>year;
        if (year == 1999){
            cout<<"Correct"<<endl;
            break;
        }
        else {
            cout<<"Wrong"<<endl;
        }
    }

    return 0;
}