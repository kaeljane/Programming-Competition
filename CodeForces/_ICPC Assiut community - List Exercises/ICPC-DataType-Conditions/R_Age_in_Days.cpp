#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int days_life;
    int ano = 365; // days
    int month = 30; // days
    cin>> days_life;

    int years = days_life / ano;
    days_life -= years*ano;
    
    int months = days_life / month;
    days_life -= months*month;


    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days_life<<" days"<<endl;
    return 0;
}