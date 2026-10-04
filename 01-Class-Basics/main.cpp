#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount account1;
    account1.display();

    BankAccount account2(1, "Halil", 4.10);
    account2.withdraw(2.10);
    account2.deposit(4.15);

    account2.withdraw(50.0);
    account2.deposit(-15.0);

    account2.display();

    
    return 0;
}   