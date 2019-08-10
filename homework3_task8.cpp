#include <iostream>

long SummNumbers(int a) {
  long temp_summ = 0;
  while (a) {
    temp_summ += a % 10;
    a /= 10;
  }
  return temp_summ;
}


int main() {
  int number = 0;
  std::cout << "Enter the numbers(to find the best divider)\n";
  std::cin >> number;
  int most_divider = 0;
  int temp = 0;
  for (int i = 1; i < number; ++i)
  {
    if (number % i == 0)
    {
      most_divider = i;
      if (i > 10) {
        temp = SummNumbers(i);
      }
      if (most_divider < temp) {
        most_divider = temp;
      }
    }
  }
  std::cout << "the best divider is: " << most_divider;
  return 0;
}
