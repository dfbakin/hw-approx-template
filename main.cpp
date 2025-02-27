// Пример использования библиотеки:

#include <iostream>
#include <string>

// don't forget to include function parser header file
//       to be able to use functionality below
#include "fparser.hh" 

int main() {
    std::string function_line;
    // read function from input to function_line

    FunctionParser function;
    // pi constant can occur in input and will be parsed correctly
    function.AddConstant("pi", 3.1415926535897932);
    function.Parse(function_line, "x");

    double x = 1.5;
    // in case of of multivariate function ::Eval 
    //         expects point to array with all variables values
    // we will consider single-variate functions only
    double func_value = function.Eval(&x);
    // func_value stores function's value now

    return 0;
}
