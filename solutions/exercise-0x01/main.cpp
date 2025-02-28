#include <iostream>
using namespace std;

void calculateFactorial(int a) {
  if (a < 0) {
    cout << "Please write a positiv number";
  }
  else {
    int result = 1;
    while (a > 0) {
      result *=  a;
      a--;
    }
  cout << "Your factorial is " << result << endl;
  }
}

int main() {
  cout << "Exercise 0x01" << endl;
  calculateFactorial(5);
  return 0;
}
