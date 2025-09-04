#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    double a;
    cin>>a;    
    if (0<=a && a<=25){
        cout<<"Interval [0,25]"<<endl;
    }
    else if (25<a && a<=50){
        cout<<"Interval (25,50]"<<endl;
    }
    else if (50<a && a<=75){
        cout<<"Interval (50,75]"<<endl;
    }
    
    else if (75<a && a<=100){
        cout<<"Interval (75,100]"<<endl;
    }
    else {
        cout<<"Out of Intervals"<<endl;
    }
    
    
    
    

    return 0;
}