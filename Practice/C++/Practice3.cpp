#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;

public:
    void accept() {
        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account holder's name: ";
        getline(cin >> ws, name);

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Enter a valid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Enter a valid withdrawal amount.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void display() {
        cout << "\nAccount number: " << accountNumber;
        cout << "\nAccount holder: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    double amount;

    account.accept();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}
