#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    string accountName;
    int accountNumber;
    /// @brief account balance
    double accountBalance;
public:
    Account(string name, int number, double balance) {
        accountName = name;
        accountNumber = number;
        accountBalance = balance;
    }
    string getName() {
        return accountName;
    }
    int getNumber() {
        return accountNumber;
    }
    double getBalance() {
        return accountBalance;
    }
    void deposit(double amount) {
        accountBalance += amount;
    }
    void withdraw(double amount) {
        if (accountBalance >= amount) {
            accountBalance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }
};

class Transaction {
private:
    int transactionNumber;
    string transactionType;
    int accountNumber;
    double amount;
public:
    Transaction(int number, string type, int account, double amt) {
        transactionNumber = number;
        transactionType = type;
        accountNumber = account;
        amount = amt;
    }
    int getNumber() {
        return transactionNumber;
    }
    string getType() {
        return transactionType;
    }
    int getAccount() {
        return accountNumber;
    }
    double getAmount() {
        return amount;
    }
};

class Bank {
private:
    vector<Account> accounts;
    vector<Transaction> transactions;
public:
    void addAccount(Account account) {
        accounts.push_back(account);
    }
    void deposit(int accountNumber, double amount) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getNumber() == accountNumber) {
                accounts[i].deposit(amount);
                Transaction transaction(transactions.size() + 1, "Deposit", accountNumber, amount);
                transactions.push_back(transaction);
                cout << "Deposit successful" << endl;
                return;
            }
        }
        cout << "Account not found" << endl;
    }
    void withdraw(int accountNumber, double amount) {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getNumber() == accountNumber) {
                accounts[i].withdraw(amount);
                Transaction transaction(transactions.size() + 1, "Withdrawal", accountNumber, amount);
                transactions.push_back(transaction);
                return;
            }
        }
        cout << "Account not found" << endl;
    }
    void displayTransactions() {
        for (int i = 0; i < transactions.size(); i++) {
            cout << "Transaction " << transactions[i].getNumber() << ": " << transactions[i].getType() << " of " << transactions[i].getAmount() << " from account " << transactions[i].getAccount() << endl;
        }
    }
};

int main() {
    Bank bank;

    Account account1("John Doe", 12345, 1000.0);
    Account account2("Jane Doe", 67890, 500.0);

    bank.addAccount(account1);
    bank.addAccount(account2);

    bank.deposit(12345, 500.0);
    bank.withdraw(12345, 200.0);
    bank.withdraw(12345, 1500.0);

    bank.displayTransactions();

    return 0;
}
