#include <iostream>
using namespace std;

int main()
{
    int value = 0; 
    int a = 0; 
    int negative = 0; 
    int positive = 0; 
    int even = 0;
    int odd = 0;

    cin>>value;
    
    for (int i = 0; i < value; i++) {

        cin>>a;
        
        if (a%2==0 || a==0) even++;
        if (a%2!=0) odd++;
        if (a<0) negative++;
        if (a>0) positive++;
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;

    return 0;
}
