#include <iostream>

void binario(int num_decimal) {
  int posicion{1};
  int num_binario{0};
  while (num_decimal > 0) {
    int bit = num_decimal % 2;
    num_binario += bit * posicion;
    num_decimal /= 2;
    posicion *= 10;
  }
  std::cout << num_binario <<std::endl;
}
int main() {
  int num_decimal;
  std::cin >> num_decimal;
  binario(num_decimal);
  return 0;
}
