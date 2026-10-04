#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string ownerName;
    double balance;
    
public:
    // Constructors
    BankAccount();
    BankAccount(int accNum, const std::string& name, double initialBalance);
    
    // Getters
    int getAccountNumber() const;
    std::string getOwnerName() const;
    double getBalance() const;

    // Setters / Mutators
    void setAccountNumber(int accountNumber);
    void setOwnerName(const std::string& ownerName);

    void deposit(double amount);
    bool withdraw(double amount);

    void display() const;


};


#endif