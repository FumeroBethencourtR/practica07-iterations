#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
std::vector<double> paso_a_vector(std::string input) {
  std::vector<double> num_de_componentes;
  std::stringstream ss(input);
  double num;
  while (ss >> num) {
    num_de_componentes.push_back(num);
  }
  return num_de_componentes;
}
double calculo (std::vector<double> num_de_componentes, double elevado) {
  int size = num_de_componentes.size();
  double result_total{0.0};
  for (int i = 0; size > i; ++i) {
    result_total += num_de_componentes[i] * std::pow(elevado,  i);
  }
  return result_total;
}
int main() {
  double elevado;
  std::cin >> elevado;
  std::cin.ignore();  
  std::string input;
  std::getline(std::cin, input);
  std::vector<double> num_de_componentes = paso_a_vector(input);
  double result_total{0.0};
  result_total += calculo(num_de_componentes, elevado);
  std::cout << std::fixed << std::setprecision(4) << result_total << std::endl;
}
