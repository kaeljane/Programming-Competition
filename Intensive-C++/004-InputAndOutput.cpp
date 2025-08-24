#include <iostream>
#include <string>
// using namespace std;

int main()
{
    /*
        std::cout<< "Hello C++20" << std::endl;

        int age {21};
        std::cout<<"Age : " << age << std::endl;

        std::cerr<<"Error message : Something wrong"<< std::endl;
        std::clog<<"Log message : Something happened "<< std::endl;
    */
    int age1;
    std::string name;

    std::cout << "Please type your name : " << std::endl;

    std::cin >> name;
    std::cin >> age1;

    std::cout << name << age1 << std::endl;
    return 0;
}
