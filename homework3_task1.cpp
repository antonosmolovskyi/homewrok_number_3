#include <iostream>

int main() {
  int number;
  std::cout << "Enter the foundation of your tree (it must be not unpaired)" << std::endl;
  std::cin >> number;
  int count = number / 2;
  for (int i = 1; i <= number; ++i) {
    if (i % 2 != 0) {
      for (int k = 0; k <= count; ++k) {
        std::cout << " ";
      }
      --count;
      for (int j = 0; j < i; ++j) {
        std::cout << "*";
      }
      std::cout << '\n';
    }
  }

  return 0;
}
