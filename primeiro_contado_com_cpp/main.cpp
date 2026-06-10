#include <iostream>
#include <string>
#include "bankAccount.h"
using namespace std;

int main(){
    // Getting information about the user
    string name;
    cout << "your name: " << endl;
    cin >> name;
    
    int accountNumber;
    cout << "your account number: " << endl;
    cin >> accountNumber;
    
    float balance;
    cout << "your balance: " << endl;
    cin >> balance;
    
    // Using the user's information
    BankAccount client;
    client.owner = name;
    client.accountNumber = accountNumber;
    client.balance = balance;
    
    
    
    client.showInfo();  
    
    
    
   
    
    
    return 0;
}