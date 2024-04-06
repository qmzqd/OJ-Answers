#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int count = 0;

  for (int i = 100; i <= 999; i++) {
    for (int j = 100; j <= 999; j++) {
      for (int k = 100; k <= 999; k++) {
        if (i * b == j * a && i * c == k * a) {
          cout << i << " " << j << " " << k << endl;
          count++;
        }
      }
    }
  }

  if (count == 0) {
    cout << "No!!!" << endl;
  }

  return 0;
}