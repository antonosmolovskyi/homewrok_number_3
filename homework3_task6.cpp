#include <iostream>

int main() {
  int num = 0;
  int counter = 0;
  std::cout << "Please Enter numbers, to count the sum of the odd elements \n";
  std::cout << "/if you want to stop entering numbers, enter * \n";
  while (num) {
    std::cin >> num;
    if (num >= -60 && num <= 90) {
      if (num == '*') {
        break;
      }
      if (num % 2 != 0) {
        counter += num;
      }
    }
    else {
      std::cout << "please enter correct number (-60 to 90) \n";
    }
  }
  std::cout << counter << '\n';
  return 0;
}
