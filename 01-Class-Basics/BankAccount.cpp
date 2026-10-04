#include "BankAccount.h"
#include <iostream>


BankAccount::BankAccount() 
            :accountNumber(0), ownerName("None"), balance(0.0) {}

BankAccount::BankAccount(int accNum, const std::string& name, double initialBalance)
            :accountNumber(0), ownerName("None"), balance(0.0) {

                setAccountNumber(accNum);
                setOwnerName(name);

                if (initialBalance >= 0.0) {
                    balance = initialBalance;
                } else {
                    std::cout << "Warning! Balance is set to 0" << std::endl ;
                }
            }


int BankAccount::getAccountNumber() const {
    return accountNumber;
}

std::string BankAccount::getOwnerName() const {
    return ownerName;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setAccountNumber(int accountNumber) {
    if(accountNumber > 0) {
        this->accountNumber = accountNumber;
    } else {
        std::cout << "Warning account number must be greater than 0!" << std::endl;
    }
    
}

void BankAccount::setOwnerName(const std::string& ownerName) {
    if(ownerName == "None" || ownerName.empty()) {
        std::cout << "Warning owner name can't be empty or None!" << std::endl;
    } else {
        this->ownerName = ownerName;
    }
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    } else {
        std::cout << "Warning deposit amount can't be zero or negative!" << std::endl;
    }
}

bool BankAccount::withdraw(double amount) {
    if(amount > 0 && amount <= balance){
        balance -= amount;
        return true;
    } else {
        std::cout << "Warning insufficient funds or invalid amount!" << std::endl;
        return false;
    }
}

void BankAccount::display() const{
    std::cout << "Account number: " << getAccountNumber() << std::endl;
    std::cout << "Owner name: " << getOwnerName() << std::endl;
    std::cout << "Balance: " << getBalance() << std::endl;
}