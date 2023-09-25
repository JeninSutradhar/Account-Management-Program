                                                *******Simple Banking System********
This is a C++ program that simulates a simple banking system with account management and transactions.

Description
The program consists of three main classes:

Account: This class represents a bank account and includes attributes such as the account name, account number, and account balance. It provides methods for depositing and withdrawing funds.

Transaction: This class represents a bank transaction and includes attributes like transaction number, transaction type, account number, and transaction amount.
/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-
Bank: This class manages accounts and transactions. It allows you to add accounts, deposit funds, withdraw funds, and display transaction history.

Usage
Compile the program using a C++ compiler. For example, you can use g++:


g++ main.cpp -o banking_program
Run the compiled executable:


./banking_program
Follow the on-screen instructions to interact with the banking system. You can add accounts, deposit, and withdraw funds, and view transaction history.

------------------Example-----------------
Bank bank;

Account account1("John Doe", 12345, 1000.0);
Account account2("Jane Doe", 67890, 500.0);

bank.addAccount(account1);
bank.addAccount(account2);

bank.deposit(12345, 500.0);
bank.withdraw(12345, 200.0);
bank.withdraw(12345, 1500.0);

bank.displayTransactions();
-------------------------------------------


Author
Jenin Sutradhar
License
This project is licensed under the MIT License - see the LICENSE file for details.