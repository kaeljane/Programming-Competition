#include <iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;
    if (age <= 17){
        cout<<"child"<<endl;
    } 
    else if (age <= 64){
        cout<<"adult"<<endl;
    } 
    else {
        cout<<"senior citizen"<<endl;
    }
    return 0;
}
