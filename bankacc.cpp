#include <iostream>
#include <string>

using namespace std;

class Student {
private:
  string name;
  int rollNumber;
  string department;

public:
  // Constructor to assign initial values
  Student(string name, int rollNumber, string department) {
    this->name = name;
    this->rollNumber = rollNumber;
    this->department = department;
  }

  // Read-only member function to display student information
  void show() const {
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Department: " << department << endl;
  }
};

class BankAccount {
private:
  string name;
  int accountNumber;
  string accountType;
  double balance;

public:
  // Constructor to assign initial values
  BankAccount(string name, int accountNumber, string accountType, double balance = 0.0) {
    this->name = name;
    this->accountNumber = accountNumber;
    this->accountType = accountType;
    this->balance = balance;
  }

  // Member function to deposit an amount
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Deposit successful. New balance: $" << balance << endl;
    } else {
      cout << "Invalid deposit amount." << endl;
    }
  }

  // Member function to withdraw an amount after checking balance
  bool withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "Withdrawal successful. New balance: $" << balance << endl;
      return true;
    } else {
      cout << "Insufficient balance or invalid withdrawal amount." << endl;
      return false;
    }
  }

  // Member function to display name and balance
  void display() {
    cout << "Account holder name: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Balance: $" << balance << endl;
  }
};

int main() {
  // Create a student object
  Student student1("John Doe", 12345, "Computer Science");
  student1.show();

  // Create a bank account object
  BankAccount account1("Jane Smith", 67890, "Savings", 1000);

  // Deposit an amount
  account1.deposit(500);

  // Withdraw an amount
  account1.withdraw(200);

  // Display name and balance
  account1.display();

  return 0;
}