#include <iostream>
#include <string>
#include <algorithm>

int main() {
  int value;
  std::cout << "Please, enter the number, to converse it \n";
  std::cin >> value;
  if (value % 10 == 0) {
    while (value % 10 == 0) {
      value /= 10;
    }
  }
  std::string s = std::to_string(value);
  std::reverse(s.begin(), s.end());
  std::cout << s << '\n';
  return 0;
}