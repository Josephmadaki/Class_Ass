include <iostream>

using namespace std;

int main() {
  int age;

  cout << "Enter your age: ";
  cin >> age;

  if (age <= 12) {
    cout << "You are a child." << endl;
  } else if (age >= 13 && age <= 19) {
    cout << "You are a teenager." << endl;
  } else if (age >= 20 && age <= 64) {
    cout << "You are an adult." << endl;
  } else if (age >= 65) {
    cout << "You are a senior." << endl;
  } else {
    cout << "Invalid age." << endl;
  }

  return 0;
}
