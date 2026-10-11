#include <iostream>
using namespace std;
int main() {
  int a;
  int m = 0;
  int c = 0;
  int prev = 0;
  int len = 0;
  int maxLen = 0;
  while (cin >> a && a != 0) {
    if (len == 0) {
      m = a;
      c = 1;
      prev = a;
      len = 1;
      maxLen = 1;
    } else {
      if (a > m) {
        m = a;
        c = 1;
      } else if (a == m) {
        c++;
      }
      if (a == prev) {
        len++;
      } else {
        len = 1;
      }
      if (len > maxLen) {
        maxLen = len;
      }
      prev = a;
    }
  }
  if (!cin.eof() && cin.fail()) {
    cerr << "Ошибка ввода\n";
    return 1;
  }
  if (len == 0) {
    cerr << "Невозможно рассчитать CNT-MAX\n";
    cout << 0 << '\n';
    return 2;
  }
  cout << c << '\n';
  cout << maxLen << '\n';
  return 0;
}
