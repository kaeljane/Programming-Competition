#include <iostream>
// using namespace std;

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

int main()
{
    int first_number{13};
    int second_number{7};

    std::cout << "First Number : " << first_number << std::endl; //13
    std::cout << "First Number : " << second_number << std::endl; // 7

    int sum = first_number + second_number; // 20
    std::cout << "Sum : " << sum << std::endl; // 20

    sum = addNumbers(25,7); // 32
    std::cout << "Sum : " << sum << std::endl; //32

    sum = addNumbers(30,54);
    std::cout<<"Sum : " << sum << std::endl; //84

    std::cout<<"Sum : " << addNumbers(3,42) << std::endl; //45
    
    return 0;
}
