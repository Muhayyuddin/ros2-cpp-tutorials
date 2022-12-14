 #ifndef CALCULATOR_H
 #define CALCULATOR_H

class Calculator
{ 
public:
 
    double addition( const double &x, const double &y);
    double subtraction(const double &x, const double &y);
    double multiplication(const double &x, const double &y);

    //as an excerceis, implement the following functions

    /// @brief This function will compute fictorial of the number passed as input
    /// @param x positive integer number 
    /// @return it will return the factorial of the positive integer x.
    double factorial(const unsigned int &x);
    /// @brief This function print and compute the sum of the fibonacci series upto the certain number
    /// @param n nth number to print and compute the sum
    /// @return return the sum of the fibonacci series upto the nth number
    double fibonacci_series(const unsigned int &n);


    
};

#endif


// /// @brief 
// /// @param x 
// /// @param y 
// /// @return 
    //double multiplication( double x,  double y);
    //double multiplication( double &x, double &y);