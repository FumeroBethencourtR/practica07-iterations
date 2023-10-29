#include <iostream>

bool binario_valino(int num_binary) {
  while (num_binary > 0) {
    int digito = num_binary % 10;
    if (digito != 0 && digito != 1) {
      return false;
    }
  }
  return true;
}

void decimal(int num_binary) {
  if (!binario_valino(num_binary)) {
    std::cout << "Wrong Input" << std::endl;
    return;
  }
  int posicion{1};
  int num_decimal{0};
  while (num_binary != 0) {
    int digito = num_binary % 10;
    num_decimal += digito * posicion;
    num_binary /= 10;
    posicion *= 2;
  }
  std::cout << num_decimal <<std::endl;
}
int main() {
  int num_binary;
  std::cin >> num_binary;
  decimal(num_binary);
  return 0;
}
