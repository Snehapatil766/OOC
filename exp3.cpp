#include <iostream>
using namespace std;

class SavingAccount {
private:
    string accountHolderName;  // data members
    int accountNumber;
    double balance;
    double interestRate;

public:
    // Default constructor
    SavingAccount() {
        cout << "\nEnter customer details (Name, Account No, Balance, Interest Rate): ";
        cin >> accountHolderName;
        cin >> accountNumber;
        cin >> balance;
        cin >> interestRate;
    }

    // Parameterized constructor
    SavingAccount(string name, int accNumber, double initialBalance, double rate) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ?" << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ?" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Applied: ?" << interest << endl;
    }

    void display() {
        cout << "\n[Savings Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ?" << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    CheckingAccount(string name, int accNumber, double initialBalance, double fee) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ?" << amount << endl;
        }
    }

    void withdraw(double amount) {
        double total = amount + transactionFee;
        if (amount > 0 && total <= balance) {
            balance -= total;
            cout << "Withdrawn: ?" << amount << " (Fee: ?" << transactionFee << " applied)" << endl;
        } else {
            cout << "Insufficient balance for withdrawal + fee" << endl;
        }
    }

    void display() {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ?" << balance << endl;
        cout << "Transaction Fee: ?" << transactionFee << endl;
    }
};

int main() {
    // Student information header
    cout << "-----------------------------------------" << endl;
    cout << "Name       : Sneha Devgonda Patil" << endl;
    cout << "Class      : SY B" << endl;
    cout << "Roll No    : 38" << endl;
    cout << "-----------------------------------------\n" << endl;

    // Object of SavingAccount (parameterized constructor)
    SavingAccount s1("Rahul", 101, 5000, 5.0);
    s1.display();
    s1.deposit(1000);
    s1.withdraw(2000);
    s1.applyInterest();
    s1.display();

    // Object of CheckingAccount
    CheckingAccount c1("Amit", 201, 10000, 50);
    c1.display();
    c1.deposit(2000);
    c1.withdraw(3000);
    c1.display();

    // Object of SavingAccount (default constructor)
    SavingAccount s2;
    s2.display();

    return 0;
}

