#include <iostream>

void bisiesto_o_no (int year) {
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        std::cout << "YES" << std::endl;
      } else {
        std::cout << "NO" << std::endl;
      }
    } else {
      std::cout << "YES" << std::endl;
    }
  } else {
    std::cout << "NO" << std::endl;
  }
}
int main() {
  int year;
  std::cin >> year;
  bisiesto_o_no(year);
  return 0;
}
