#include<iostream>
using namespace std;

double get_balance() {
  double balance;

  cout << "What is your account's balance?" << '\n';
  cin >> balance;

  return balance;
}

int get_checks_written() {
  int checks_written;

  cout << "How many checks did you write?" << '\n';
  cin >> checks_written;

  return checks_written;
}

double compute_charges(double balance, int checks_written) {
  double fees = 0;

  if(balance < 400) {
    fees = fees + 15;
  }

  if(checks_written < 20) {
    fees = fees + 0.1 * checks_written;
  } else if(checks_written < 40) {
    fees = fees + 0.08 * checks_written;
  } else if(checks_written < 60) {
    fees = fees + 0.06 * checks_written;
  } else {
    fees = fees + 0.04 * checks_written;
  }

  return fees;
}

int main() {
  double balance = get_balance();
  int checks_written = get_checks_written();
  double charges;


  if(checks_written < 0) {
    cout << "Cannot accept a negative number of checks written. " <<
            "The transaction will not complete." << '\n';
  } else {

    if(balance < 0) {
      cout << "Warning: your account is overdrawn." << '\n';
    }

    charges = compute_charges(balance, checks_written);

    cout << "Service fees: $" << charges << '\n';
  }


  return 0;
}
