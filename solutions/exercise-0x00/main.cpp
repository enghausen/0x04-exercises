#include <iostream>
#include <algorithm>
using namespace std;

int findMax(int a, int b, int c) {
  return max({a, b, c});
}

int main() {
  cout << "Exercise 0x00" << endl;
  cout << "The biggeste number is " << findMax(10, 5, 30) << endl;

  return 0;
}