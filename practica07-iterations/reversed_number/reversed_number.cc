/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file reversed_number.cc
  * @author Ricardo Fumero Bethencourt alu0101621944.edu.es
  * @date Oct 30 2023
  * @brief El programa lee un numeros y lo escribe al reves.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50327_en/submissions/S002
  */

#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string num;
  std::cin >> num;
  std::reverse (num.begin(), num.end());
  std::cout << num << std::endl;
}
    
