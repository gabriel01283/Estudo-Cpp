#include <iostream>
#include <string>
#include "calculator.h"

using namespace std;

int main(){
    
    int number1;
    int number2;
    
    //Chamada usuario
    cout << "Type a number: " << endl;
    cin >> number1;
    
    cout << "Type another number: " <<endl;
    cin >> number2;
    
    
    Calculator calculator;
    
    cout << "-----------------------" << endl;
    cout << "Add: " << calculator.sum(number1,number2) << endl;
    cout << "Sub: " << calculator.sub(number1,number2) << endl;
    cout << "Div: " << calculator.div(number1,number2) << endl;
    cout << "Mul: " << calculator.mul(number1,number2) << endl;
    
    return 0;
}