/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file ejer11_serie_de_fibonacci.cc
  * @author Ricardo Fumero Bethencourt alu0101621944@ull.edu.es
  * @date Oct 23 2023
  * @brief El programa imprime los N primeros términos de la Serie de Fibonacci. Los primeros términos de la serie son: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...
  * @bug There are no known bugs
  * @see https://docs.google.com/document/d/1IVXL8p2OQH20hNdabSTur1dDnDyKI8XYvHtJt19KTjg/edit
  */


#include <iostream>
#include <vector>

int main() {
  std::vector<int> serie;
  int repeticiones;
  std::cin >> repeticiones;
  serie.push_back(0);
  serie.push_back(1);
  switch (repeticiones) {
    case 1:
      std::cout << serie[0] << std::endl;
      break;
    case 2:
      std::cout << serie[0] << " " << serie[1] << std::endl;
      break;
    default:
      for (int i = 3; i <= repeticiones; ++i) {
        if (i == 3) {
          std::cout << serie[0] << " " << serie[1] << " ";
        }
        int elemento3 = serie[0] + serie[1];
        serie.push_back(elemento3);
        std::cout << elemento3 << " ";
        serie.erase(serie.begin());
      }
      break;
  }
  return 0;
}
