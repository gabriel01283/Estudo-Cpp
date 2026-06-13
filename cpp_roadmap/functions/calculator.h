#include <iostream>
#include <string>

using namespace std;

class Calculator{
    public:
    
    int sum(int number1, int number2){
        return number1 + number2;
    }

    int sub(int number1, int number2){
        return number1 - number2;
    }

    int div(int number1, int number2){
        return number1 / number2;
    }

    int mul(int number1, int number2){
        return number1 * number2;
    }
};