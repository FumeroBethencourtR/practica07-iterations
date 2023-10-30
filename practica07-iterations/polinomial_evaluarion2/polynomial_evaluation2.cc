#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>

std::vector<double> paso_de_elementos(std::string input) {
  std::vector<double> componentes;
  std::stringstream ss(input);
  double num;
  while (ss >> num) {
    componentes.push_back(num);
  }
  std::reverse(componentes.begin(), componentes.end());  
  return componentes;
}
double calculo (std::vector<double> componentes, double elevado) {
  int size = componentes.size();
  double result_total{0.0};
  int i = size;
  for (i; i >= 0; --i) {
    result_total += componentes[i] * std::pow(elevado,  i);
  }
  return result_total;
}
int main() {
  double elevado;
  std::cin >> elevado;  
  std::cin.ignore();  
  std::string input;
  std::getline(std::cin, input);
  std::vector<double> componentes_alrevez = paso_de_elementos(input);
  double result_total = calculo(componentes_alrevez, elevado);
  std::cout << std::fixed << std::setprecision(4) << result_total << std::endl;
}

