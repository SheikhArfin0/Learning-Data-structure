#include <iostream>
using namespace std;

int main() {
  int n = 9;
  int arr[n] = {0, 1, 2, 2, 1, 1, 0, 0, 1};

  int i = 0, k = n - 1;
  int mid = 0;

  while (mid <= k) {
    switch (arr[mid]) {
      case 0:
        swap(arr[i++], arr[mid++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(arr[mid], arr[k--]);
        break;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
