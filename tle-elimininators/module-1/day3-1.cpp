#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    string s;
    cin>>a>>s>>b;
    if (-100<=a&&b<=100){
        if (s == ">") {
            if(a>b){
                cout<<"Right"<<endl;
            }
            else{
                cout<<"Wrong"<<endl;
            }
        }
        else if (s=="="){
            if(a==b){
                cout<<"Right"<<endl;
            }
            else{
                cout<<"Wrong"<<endl;
            }
        }
        else{
            if(a<b){
                cout<<"Right"<<endl;
            }
            else{
                cout<<"Wrong"<<endl;
            }
        }
    }
}

