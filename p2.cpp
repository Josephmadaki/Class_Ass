#include <iostream>

using namespace std;

int main() {
  int units;
  double charge;

  cout << "Enter the number of units consumed: ";
  cin >> units;

  if (units <= 100) {
    charge = units * 0.12;
  } else if (units > 100 && units <= 200) {
    charge = 100 * 0.12 + (units - 100) * 0.15;
  } else if (units > 200) {
    charge = 100 * 0.12 + 100 * 0.15 + (units - 200) * 0.20;
  } else {
    cout << "Invalid input." << "\n";
    return 1;
  }

  cout << "The electricity charge is $" << charge << "\n";

  return 0;
}
