#include <iostream>
using namespace std;

int main() {
  int num[5];
  cout << "Enter 4 Numbers: " << endl;
  for (int k = 0; k < 4; ++k) {
    cin >> num[k];
  }                                      //basic input array code;
  cout << "The Numbers Are: ";
  for (int f = 0; f < 4; ++f) {
    cout << num[f] << " ";
  }
  return 0;
}

