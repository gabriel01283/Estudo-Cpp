#include <iostream>
#include <string>

using namespace std;

class BankAccount{
    public:
    string owner;
    int accountNumber;
    float balance;

    void deposit(float amount){
        balance += amount;
        cout << "New value: " <<  amount << endl;
    }
    
    void withDraw(float amount){
        balance -= amount ;
        cout << "New value: " << amount << endl;
    }
    
    void showInfo(){
        cout << "Owner: " <<  owner << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};