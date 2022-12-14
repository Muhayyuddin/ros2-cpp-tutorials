#include <iostream>
#include "calculator.hpp"

int main()
{
    Calculator calculate;
    double first_num{0.0};
    double second_num{0.0};

    std::cout<<"Enter first number ";
    std::cin>>first_num;
    std::cout<<"Enter second number ";
    std::cin>>second_num;

    auto ans = calculate.addition(first_num,second_num);
    
    // Call the function from the calculator class here and test if they are working correctly.



    std::cout<<"The answer is "<< ans <<std::endl;

    return EXIT_SUCCESS;
}