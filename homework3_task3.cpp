#include <iostream>

int main() {
  int num = 0;
  std::cout << "Enter count, to count the number of bits set in your number" << std::endl;
  std::cin >> num;
  int temp = 0;
  int counter = 0;
  int temp_counter = 0;
  while (num) {
    num = num / 2;
    temp = num % 2;
    std::cout << temp;
    while (temp) {
      counter = temp % 10;
      if (counter == 1) {
        ++temp_counter;
      }
      temp /= 10;
    }
  }
  std::cout << num << " -> " << temp_counter << '\n';

  return 0;
}