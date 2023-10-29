#include <iostream>
#include <vector>
#include <string>
#include <array>

void output(std::string &input) {
  int result;
  for (int i = 0; input.length() > i; ++i) {
    result += input[i] - '0';
  }
  std::cout << result << std::endl;
}
int main() {
  std::string input;
  std::cin >> input;
  output(input);
}
