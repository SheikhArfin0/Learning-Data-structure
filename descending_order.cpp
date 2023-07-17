#include<iostream>
using namespace std;
class Sorting {
  int a[200];
  public:
    void getdata() {
      int m;
      cout << "Enter the number of terms you want to get sort: ";
      cin >> m;
      cout << "Enter the number: ";
      for (int i = 0; i < m; i++)
        cin >> a[i];
      cout << "Unsort Array=";
      for (int i = 0; i < m; i++)
        cout << a[i] << ",";
      for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
          if (a[i] <= a[j]) {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
          }
        }
      }
      cout << endl << "Sorted Array= \n";
      for (int i = 0; i < m; i++)
        cout << a[i] << ",";
    }
};
int main() {
  Sorting f;
  f.getdata();
  return 0;
}
