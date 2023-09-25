# Account-Management-Program
This is a simple banking system program written in C++.


## Usage

1. Clone the repository to your local machine.
2. Compile the program.
3. Run the executable.
4. Follow on-screen instructions to interact with the banking system.


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
------------------------------------------------------------------
## Compilation

You can compile the program using g++:

```bash
g++ main.cpp -o banking_system


