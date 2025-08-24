#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    int big, less;
    cin >> a >> b >> c;
    // biggest
    if (a > b && a > c)
    {
        big = a;
        if (b > c){
            less = c;
        }
        else {
            less = b;
        }
    }
    else if (b > a && b > c)
    {
        big = b;
        if (a > c){
            less = c;
        }
        else {
            less = a;
        }
    }
    
    else if (c > a && c > b)
    {
        big = c;
        if (a > b){
            less = b;
        }
        else {
            less = a;
        }
    }
    
    if (a == b){
        if (a>c) {
            big = a;
            less = c;
        }
        else{
            big = c;
            less = a;
        }
    }
    else if (a == c){
        if (c>b) {
            big = c;
            less = b;
        }
        else{
            big = b;
            less = c;
        }
    }
    else if (b == c){
        if (b>a) {
            big = b;
            less = a;
        }
        else{
            big = a;
            less = b;
        }
    }
    cout<<less<<" "<<big<<endl;
}
